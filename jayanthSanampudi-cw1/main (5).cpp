#include<iostream>
using namespace std; // Using the standard namespace to avoid having to prefix standard library objects with std::

int main() // The main function where execution begins
{
    string cars[5] = { "volvo", "toyota", "ford", "tesla", "honda" }; // Declaration and initialization of an array of strings named cars with 5 elements

    int n = sizeof(cars) / sizeof(string); // Calculate the number of elements in the cars array

    // Loop through each element of the cars array and output its value
    for (int i; i < n; i++) // Note: You forgot to initialize 'i' in the loop declaration
    {
        cout << cars[i] << "\n"; // Output the value of the current element followed by a newline
    }

    return 0; // Return 0 to indicate successful execution
}
