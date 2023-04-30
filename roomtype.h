#include <string>
#include <cmath>
#include <vector>
#include <memory>
#include "room.h"


namespace HotelSystem {
    class RoomType {
        int cost = 0;
        int number = 0;

        std::vector<Room> rooms;
        double occupancyPercentage = 0.0;
        int occupied{};
        int bookings{};
        int occupiedAllTime{};

        void updateOccupiedNumber() {
            occupied = 0;
            for (const auto &room : rooms) {
                occupied += !room.getVacant();
                occupiedAllTime += !room.getVacant();
            }
        }

        void updateBookingsNumber() {
            bookings = 0;
            for (const auto &room : rooms) {
                bookings += room.getNumOfBooks();
            }
        }

        void setOccupancyPercentage(int day) {
            occupancyPercentage = static_cast<double>(occupiedAllTime) / (number * day) * 100;
        }


    public:
        int getCost() const {
            return cost;
        }

        int getNumber() const {
            return number;
        }

        int getBookings() const {
            return bookings;
        }

        int getOccupied() const {
            return occupied;
        }

        int getOccupiedAllTime() const {
            return occupiedAllTime;
        }

        double getOccupancyPercentage() const {
            return occupancyPercentage;
        }

        std::vector<Room> getRooms() const {
            return rooms;
        }

        RoomType(int typeCost, int typeNumber) {
            cost = typeCost;
            number = typeNumber;

            for (int i = 0; i < number; i++)
            {
                rooms.push_back(Room());
            }
        }

        void update(int day) {
            for (auto &room : rooms) {
                room.update(day);
            }

            updateBookingsNumber();
            updateOccupiedNumber();
            setOccupancyPercentage(day);
        }

        bool processRequest(bool isBooking, std::pair<int, int> &date) {
            for (auto &room : rooms) {
                if (room.processRequest(isBooking, date)) {
                    return true;
                }
            }

            return false;
        }
    };
}
