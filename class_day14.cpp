
#include <iostream>
#include <vector>

class StudyTracker {
private:
    std::vector<int> daily_hours;

public:
    // Constructor
    StudyTracker() = default;

    void add_hours(int hours) {
        if (hours < 0) {
            std::cout << "Hours cannot be negative.\n";
            return;
        }

        daily_hours.push_back(hours);
    }

    int calculate_total() const {
        int total = 0;

        for (int hours : daily_hours) {
            total += hours;
        }

        return total;
    }

    double calculate_average() const {
        if (daily_hours.empty()) {
            return 0.0;
        }

        return static_cast<double>(calculate_total())
            / daily_hours.size();
    }

    std::size_t days_tracked() const {
        return daily_hours.size();
    }
};

int main() {
    StudyTracker tracker;

    tracker.add_hours(6);
    tracker.add_hours(4);
    tracker.add_hours(-1);

    std::cout << "Days tracked: "
              << tracker.days_tracked() << '\n';

    std::cout << "Total hours: "
              << tracker.calculate_total() << '\n';

    std::cout << "Average hours: "
              << tracker.calculate_average() << '\n';

    return 0;
}
