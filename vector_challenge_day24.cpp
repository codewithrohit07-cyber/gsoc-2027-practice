#include <iostream>
#include <vector>

int main() {
    std::vector<int> study_hours;

    study_hours.reserve(7);

    study_hours.push_back(2);
    study_hours.push_back(3);
    study_hours.emplace_back(4);
    study_hours.emplace_back(5);

    int total = 0;

    for (int hours : study_hours) {
        total += hours;
    }

    double average =
    static_cast<double>(total) /
    static_cast<double>(study_hours.size());

    std::cout << "Study hours: ";

    for (int hours : study_hours) {
        std::cout << hours << ' ';
    }

    std::cout << "\nTotal: " << total << '\n';
    std::cout << "Average: " << average << '\n';
    std::cout << "Size: " << study_hours.size() << '\n';
    std::cout << "Capacity: " << study_hours.capacity() << '\n';

    return 0;
}