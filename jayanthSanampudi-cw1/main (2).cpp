#include <iostream> 
using namespace std; // Using the standard namespace to avoid having to prefix standard library objects with std::

int main() // The main function where execution begins
{
    int mynumbers[5] = { 10, 20, 30, 40, 50 }; // Declaration and initialization of an array of integers named mynumbers with 5 elements

    // Looping through each element of the mynumbers array using a range-based for loop
    for (int i : mynumbers) // For each element i in mynumbers
    {
        cout << i << "\n"; // Output the value of the current element followed by a newline
    }

    return 0; // Return 0 to indicate successful execution
}
