
#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace to avoid prefixing std:: before standard functions and objects

int main() { // Main function where the execution of the program begins
    string name = "Jacob Mbuco"; // Declare a string variable 'name' and initialize it with the value "Jacob Mbuco"
    int age = 24;// Declare an integer variable 'age' and initialize it with the value 24
    float height = 1.75;// Declare a float variable 'height' and initialize it with the value 1.75

    cout << "My Name: " << name << endl; // Output the value of 'name' to the console with a label "My Name: "
    cout << "My Age: " << age << " years" << endl; // Output the value of 'age' to the console with a label "My Age: " and append " years" to indicate the unit
    cout << "My Height: " << height << " metres" << endl; // Output the value of 'height' to the console with a label "My Height: " and append " metres" to indicate the unit

    return 0;// Return 0 to indicate that the program has executed successfully
}
