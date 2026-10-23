
#include <cassert>
#include <iostream>
#include <vector>

int calculate_total(const std::vector<int>& hours) {
    int total = 0;

    for (const auto hour : hours) {
        total += hour;
    }

    return total;
}

void check_total(const std::vector<int>& hours, int expected) {
    assert(calculate_total(hours) == expected);
}

void test_totals() {
    check_total({2, 3, 5}, 10);
    check_total({0, 0, 0}, 0);
    check_total({}, 0);
    check_total({5}, 5);
}

int main() {
    test_totals();
    std::cout << "All Day 10 tests passed!\n";
    return 0;
}
