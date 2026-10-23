
#include <iostream>
#include <vector>

// Reads the vector without copying it.
int calculate_total(const std::vector<int>& hours) {
    int total = 0;

    for (int hour : hours) {
        total += hour;
    }

    return total;
}

// Changes the original vector.
void add_one_hour(std::vector<int>& hours) {
    for (int& hour : hours) {
        hour += 1;
    }
}

int main() {
    std::vector<int> hours{2, 3, 5};

    std::cout << "Original total: "
              << calculate_total(hours) << '\n';

    add_one_hour(hours);

    std::cout << "Total after adding one hour to each day: "
              << calculate_total(hours) << '\n';

    std::cout << "Updated hours: ";

    for (const int hour : hours) {
        std::cout << hour << ' ';
    }

    std::cout << '\n';

    return 0;
}
