#include<iostream>
using namespace std; // Using the standard namespace to avoid having to prefix standard library objects with std::

int main() // The main function where execution begins
{
    // Declaration and initialization of a 2D array of strings named letters with 2 rows and 4 columns
    string letters[2][4] = { {"A", "B", "C", "D"}, {"E", "F", "G", "H"} };

    cout << letters[0][2]; // Output the element at row 0, column 2 of the letters array

    return 0; // Return 0 to indicate successful execution
}
