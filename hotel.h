#ifndef HOTEL_H
#define HOTEL_H

#include "roomtype.h"

namespace HotelSystem {
    class Hotel {
        std::vector<RoomType> rooms;
        int totalRequests = 0;
        int doneRequests = 0;
        int profit = 0;

    public:
        Hotel() = default;

        Hotel(std::vector<int> &cnt, std::vector<int> &prices) {
            for (size_t i = 0; i < cnt.size(); ++i) {
                rooms.emplace_back(prices[i], cnt[i]);
            }
        }

        void update(int day) {
            for (auto &roomType : rooms) {
                roomType.update(day);
            }
        }

        bool processRequest(int type, bool isBooking, std::pair<int, int> &dates) {
            return rooms[type].processRequest(isBooking, dates);
        }

        std::vector<RoomType> getRooms() const {
            return rooms;
        }

        int getTotalRequests() const {
            return totalRequests;
        }

        void incTotalRequests() {
            ++totalRequests;
        }

        int getDoneRequests() const {
            return doneRequests;
        }

        void incDoneRequests() {
            ++doneRequests;
        }

        int getProfit() const {
            return profit;
        }

        void incProfit(int income) {
            profit += income;
        }
    };
}

#endif // HOTEL_H
