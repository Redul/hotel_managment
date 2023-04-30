#include <random>
#include "hotel.h"


namespace HotelSystem {
    class Model {
        int period = 0;
        int day = 0;
        Hotel hotel;
        std::vector<double> dist;

        std::vector<double> MakeDist() {
            std::vector<double> dist(hotel.getRooms().size());
            int sum = 0;

            for (size_t i = 0; i < hotel.getRooms().size(); ++i) {
                sum += hotel.getRooms()[i].getCost();
            }

            for (size_t i = 0; i < dist.size() - 1; ++i) {
                dist[i] = static_cast<double>((sum - hotel.getRooms()[i].getCost())) / sum / (hotel.getRooms().size() - 1);
            }

            for (size_t i = 1; i < dist.size() - 1; ++i) {
                dist[i] += dist[i - 1];
            }

            dist.back() = 1;

            return dist;
        }

    public:
        int getPeriod() const {
            return period;
        }

        int getTotalRequests() const {
            return hotel.getTotalRequests();
        }

        int getDoneRequests() const {
            return hotel.getDoneRequests();
        }

        int getProfit() const {
            return hotel.getProfit();
        }

        int getDay() const {
            return day;
        }

        std::vector<int> getOccupied() const {
            std::vector<int> occupied(hotel.getRooms().size(), 0);
            for (size_t i = 0; i < occupied.size(); ++i) {
                occupied[i] = hotel.getRooms()[i].getOccupied();
            }
            return occupied;
        }

        std::vector<double> getOccupancyPercentage() const {
            std::vector<double> occupancyPercentage(hotel.getRooms().size(), 0);
            for (size_t i = 0; i < occupancyPercentage.size(); ++i) {
                occupancyPercentage[i] = hotel.getRooms()[i].getOccupancyPercentage();
            }
            return occupancyPercentage;
        }

        std::vector<int> getBookings() const {
            std::vector<int> bookings(hotel.getRooms().size(), 0);
            for (size_t i = 0; i < bookings.size(); ++i) {
                bookings[i] = hotel.getRooms()[i].getBookings();
            }
            return bookings;
        }

        int getNumberOfRooms(int type) {
            return hotel.getRooms()[type].getNumber();
        }

        Model() = default;

        Model(int per, Hotel &hot) {
            period = per;
            day = 1;
            hotel = hot;
            dist = MakeDist();
        }

        void makeStep() {
            double d;
            static int hours = 0;
            size_t type = 0;
            int wait;
            int date1, date2;
            bool isBooking;
            bool isDoneRequest;

            while (hours < 24) {
                std::random_device rand;
                std::mt19937 gen(rand());
                std::uniform_real_distribution<double> chDist(0.0, 1.0);
                std::uniform_int_distribution hourDist(1, 5);
                wait = hourDist(gen);

                hours += wait;
                if (hours >= 24) {
                    hours -= 24;
                    hotel.update(++day);
                    break;
                }

                hotel.incTotalRequests();

                isBooking = chDist(gen) > 0.33;

                d = chDist(gen);

                for (size_t i = 0; i < dist.size(); ++i) {
                    if (dist[i] > d) {
                        type = i;
                        break;
                    }
                }

                if (isBooking) {
                    if (day == period) {
                        continue;
                    }

                    std::uniform_int_distribution dateDist(day + 1, period);
                    date1 = dateDist(gen);
                } else {
                    date1 = day;
                }

                std::uniform_int_distribution dateDist(date1, period);
                date2 = dateDist(gen);

                auto dates = std::make_pair(date1, date2);
                isDoneRequest = hotel.processRequest(type, isBooking, dates);

                if (isDoneRequest) {
                    hotel.incDoneRequests();
                    hotel.incProfit(hotel.getRooms()[type].getCost() * (date2 - date1 + 1));
                } else {
                    while (type + 1 < hotel.getRooms().size() && !isDoneRequest) {
                        isDoneRequest = hotel.processRequest(++type, isBooking, dates);
                    }

                    if (isDoneRequest) {
                        hotel.incDoneRequests();
                        hotel.incProfit(0.3 * hotel.getRooms()[type].getCost() * (date2 - date1 + 1));
                    }
                }
            }

            if (day > period) {
                for (auto &roomType : hotel.getRooms()) {
                    roomType.update(day);
                }
            }
        }

    };
}
