class MyCalendarTwo {
public:
    vector<pair<int, int>> bookings;   
    vector<pair<int, int>> overlaps;   
    MyCalendarTwo() {
    }

    bool book(int start, int end) {
        for (const auto& [s, e] : overlaps) {
            if (start < e && s < end) {
                return false;  
            }
        }
        for (const auto& [s, e] : bookings) {
            if (start < e && s < end) {
                overlaps.push_back({max(start, s), min(end, e)});
            }
        }
        bookings.push_back({start, end});
        return true;
    }
};
