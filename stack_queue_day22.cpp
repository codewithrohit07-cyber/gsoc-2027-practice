#include <iostream>
#include <queue>
#include <stack>

int main() {
    // STACK: Last In, First Out.
    std::stack<int> tasks;

    tasks.push(10);
    tasks.push(20);
    tasks.push(30);

    std::cout << "Stack top: " << tasks.top() << '\n';

    tasks.pop();

    std::cout << "Stack top after pop: "
              << tasks.top() << '\n';
    tasks.pop();

    std::cout << "Stack top after second pop: "
              << tasks.top() << '\n';

    std::cout << "Stack size after second pop: "
              << tasks.size() << '\n';
  
    // QUEUE: First In, First Out.
    std::queue<int> waiting_list;

    waiting_list.push(10);
    waiting_list.push(20);
    waiting_list.push(30);

    std::cout << "\nQueue front: "
              << waiting_list.front() << '\n';

    waiting_list.pop();

    std::cout << "Queue front after pop: "
              << waiting_list.front() << '\n';

    waiting_list.pop();

    std::cout << "Queue front after second pop: "
              << waiting_list.front() << '\n';

    std::cout << "Queue size after second pop: "
              << waiting_list.size() << '\n';

    // Check whether the stack and queue are empty.
    std::cout << "\nIs stack empty? "
              << (tasks.empty() ? "Yes" : "No") << '\n';
 
    std::cout << "Is queue empty? "
              << (waiting_list.empty() ? "Yes" : "No") << '\n';
    
    return 0;
}