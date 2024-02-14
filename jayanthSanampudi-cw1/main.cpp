#include <iostream> 
using namespace std; // Using the standard namespace to avoid having to prefix standard library objects with std::

int main() // The main function where execution begins
{
    string cars[4] = { "volvo", "BMW", "Tesla", "Ford" }; // Declaration and initialization of an array of strings named cars with 4 elements

    for (int i; i < 4; i++) // Loop through each element of the cars array (Note: You forgot to initialize 'i' in the loop declaration)
    {
        cout << cars[i] << ",\n"; // Output the value of the current element followed by a comma and a newline
    }

    return 0; // Return 0 to indicate successful execution
}
