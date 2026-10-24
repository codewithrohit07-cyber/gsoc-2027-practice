
#include <iostream>

int main() {
    int hours = 5;

    // Store the address of hours.
    int* ptr = &hours;

    std::cout << "Original value: " << hours << '\n';
    std::cout << "Value through pointer: " << *ptr << '\n';

    // Modify hours through the pointer.
    *ptr = 12;

    std::cout << "Updated value: " << hours << '\n';

    // A pointer can point to nothing.
    ptr = nullptr;

    if (ptr != nullptr) {
        std::cout << "Value: " << *ptr << '\n';
    } else {
        std::cout << "Pointer is null; nothing to access.\n";
    }

    return 0;
}
