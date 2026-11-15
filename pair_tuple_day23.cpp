#include <iostream>
#include <string>
#include <tuple>
#include <utility>

int main() {
    // Create a pair.
    std::pair<std::string, int> subject;

    subject = {"C++", 3};

    std::cout << "Subject: "
              << subject.first << '\n';

    std::cout << "Study hours: "
              << subject.second << '\n';

    // Create a tuple.
    std::tuple<std::string, int, double> student;

    student = {"Rohit", 22, 85.5};

    std::cout << "\nStudent details:\n";

    std::cout << "Name: "
              << std::get<0>(student) << '\n';

    std::cout << "Age: "
              << std::get<1>(student) << '\n';

    std::cout << "Marks: "
              << std::get<2>(student) << '\n';

    // Create a pair using make_pair().
    auto study = std::make_pair(std::string("Git"), 2);

    std::cout << "\nUsing make_pair():\n";

    std::cout << "Subject: " << study.first << '\n';
    std::cout << "Hours: " << study.second << '\n';

    // Create a tuple using make_tuple().
    auto course = std::make_tuple(
        std::string("C++"),
        23,
        4.5
    );

    std::cout << "\nUsing make_tuple():\n";

    std::cout << "Course: "
              << std::get<0>(course) << '\n';

    std::cout << "Day: "
              << std::get<1>(course) << '\n';

    std::cout << "Study hours: "
              << std::get<2>(course) << '\n';
    // Access pair values.
    std::cout << "\nAccessing pair values:\n";
    std::cout << "Subject: " << study.first << '\n';
    std::cout << "Hours: " << study.second << '\n';

    // Access tuple values.
    std::cout << "\nAccessing tuple values:\n";
    std::cout << "Course: " << std::get<0>(course) << '\n';
    std::cout << "Day: " << std::get<1>(course) << '\n';
    std::cout << "Study time: " << std::get<2>(course) << '\n';
    
    return 0;
}