class MyCalendar {
public:
    vector<pair<int, int>> bookings; 
    MyCalendar() {
    }

    bool book(int start, int end) {
        for (const auto [s, e] : bookings) {
            if (start < e && s < end) {
                return false;
            }
        }
        bookings.push_back({start, end}); 
        return true;
    }
};
