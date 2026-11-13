#include <iostream>
#include <set>
#include <unordered_set>

int main() {
    std::set<int> study_hours;

    // Insert values.
    study_hours.insert(3);
    study_hours.insert(5);
    study_hours.insert(2);
    study_hours.insert(3);
    study_hours.insert(4);
    study_hours.erase(3);

    std::cout << "After removing 3:\n";

    for (const int hours : study_hours) {
    std::cout << hours << " ";
    }

    std::cout << '\n';

    std::cout << "New set size: "
              << study_hours.size() << '\n';

    std::unordered_set<int> unordered_hours;

    unordered_hours.insert(3);
    unordered_hours.insert(5);
    unordered_hours.insert(2);
    unordered_hours.insert(3);
    unordered_hours.insert(4);

    std::cout << "Unordered set values:\n";

    for (const int hours : unordered_hours) {
        std::cout << hours << " ";
    }

    std::cout << '\n';

    std::cout << "Unordered set size: "
              << unordered_hours.size() << '\n';

    return 0;
}