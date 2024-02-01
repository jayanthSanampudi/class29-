
#include <iostream> 
#include <stack>    
using namespace std; // Standard namespace for C++ library components

int main()
{
    stack<int> stack; // Declaration of a stack named 'stack'

    // Pushing elements onto the stack
    stack.push(21);
    // The values pushed in the stack should be of the same data type which is specified during the declaration of the stack
    stack.push(22);
    stack.push(24);
    stack.push(25);
    int num = 0;
    stack.push(num); // Pushing the value of 'num' onto the stack
    stack.pop();     // Removing one element from the stack
    stack.pop();     // Removing another element from the stack
    stack.pop();     // Removing another element from the stack

    // Loop to print elements of the stack until it becomes empty
    while (!stack.empty()) {
        cout << stack.top() << " "; // Output the top element of the stack
        stack.pop();                // Remove the top element from the stack
    }

    return 0;
}
