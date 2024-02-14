#include<iostream> 
using namespace std; // Using the standard namespace to avoid having to prefix standard library objects with std::

int main() // The main function where execution begins
{
    // Declaration and initialization of an array of strings named cars
    string cars[] = { "Volvo", "BMW", "Ford", "Mazda" };

    // Modification of the first element of the cars array
    cars[0] = "tata";

    // Loop to print each element of the cars array along with its index
    for (int i = 0; i < 5; i++) // Note: This loop runs from i=0 to i<5, accessing elements 0 to 4.
        cout << i << "=" << cars[i] << "\n"; // Output the index and the corresponding car name

    // Output the first element of the cars array separately
    cout << cars[0]; // Output the first element of the cars array

    return 0; // Return 0 to indicate successful execution
}
