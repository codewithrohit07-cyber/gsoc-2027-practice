
#include <iostream>
#include <memory>

int main() {
    // An ordinary automatic variable.
    int ordinary_hours = 5;

    std::cout << "Ordinary variable: "
              << ordinary_hours << '\n';

    // A dynamically allocated integer managed safely.
    std::unique_ptr<int> hours_ptr =
        std::make_unique<int>(20);

    std::cout << "Dynamic value: "
              << *hours_ptr << '\n';

    // Modify the dynamically allocated integer.
    *hours_ptr = 12;

    std::cout << "Updated dynamic value: "
              << *hours_ptr << '\n';

    // No manual delete is needed.
    // The object is released automatically when
    // hours_ptr goes out of scope.

    return 0;
}
