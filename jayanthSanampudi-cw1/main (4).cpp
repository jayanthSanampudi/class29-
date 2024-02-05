#include<iostream> 
using namespace std; // Using the standard namespace to avoid having to prefix standard library objects with std::

int main() // The main function where execution begins
{
    int mynumbers[5] = { 10, 20, 30, 40, 50 }; // Declaration and initialization of an array of integers named mynumbers with 5 elements

    cout << sizeof(mynumbers) << endl; // Output the size of the mynumbers array in bytes
    cout << sizeof(int) << endl; // Output the size of an integer in bytes

    return 0; // Return 0 to indicate successful execution
}
