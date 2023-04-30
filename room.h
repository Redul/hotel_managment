#include <utility>
#include <deque>
#include <iostream>


namespace HotelSystem {
    class Room {
        bool isVacant = true;
        std::deque<std::pair<int, int>> dates;

    public:
        bool getVacant() const {
            return isVacant;
        }

        bool getNumOfBooks() const {
            return dates.size() - !isVacant;
        }

        void update(int day) {
            if (dates.empty()) {
                return;
            }

            if (dates[0].second < day)
            {
                dates.pop_front();
                isVacant = true;
            }

            if (dates.size() != 0 && dates[0].first == day)
            {
                isVacant = false;
            }
        }

        bool processRequest(bool isBooking, std::pair<int, int> &date) {
            if (dates.empty()) {
                dates.push_back(date);

                if (!isBooking)
                {
                    isVacant = false;
                }
                return true;
            }

            size_t idx = 0;
            while (idx < dates.size() && dates[idx].first <= date.first) {
                ++idx;
            }

            if (idx != dates.size()) {
                if ((idx == 0 || dates[idx - 1].second < date.first) && dates[idx].first > date.second) {
                    dates.insert(dates.begin() + idx, date);

                    if (!isBooking && idx == 0)
                    {
                        isVacant = false;
                    }
                    return true;
                }
            } else {
                if (dates.back().second < date.first) {
                    dates.push_back(date);
                    return true;
                }
            }

            return false;
        }
    };
}

