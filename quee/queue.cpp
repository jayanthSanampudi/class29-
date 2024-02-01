#include <iostream> 
#include <queue>    
using namespace std; // Standard namespace for C++ library components

// Function to print the contents of the queue
void showq(queue<int> gq)
{
    queue<int> g = gq; // Creating a copy of the input queue

    // Loop until the queue is empty
    while (!g.empty())
    {
        cout << '\t' << g.front(); // Output the front element of the queue
        g.pop(); // Remove the front element from the queue
    }
    cout << '\n'; // Output a newline after printing all elements
}

// Driver code
int main()
{
    queue<int> gquiz; // Declaration of a queue named gquiz

    // Adding elements to the queue
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);

    // Output the message indicating the queue
    cout << "The queue gquiz is : ";

    // Function call to print the queue elements
    showq(gquiz);

    // Output the size of the queue
    cout << "\ngquiz.size() : " << gquiz.size();

    // Output the front element of the queue
    cout << "\ngquiz.front() : " << gquiz.front();

    // Output the back element of the queue
    cout << "\ngquiz.back() : " << gquiz.back();

    // Output the message indicating the pop operation
    cout << "\ngquiz.pop() : ";

    // Perform pop operation on the queue
    gquiz.pop();

    // Function call to print the updated queue after pop operation
    showq(gquiz);

    return 0; // Indicate successful completion of the program
}
