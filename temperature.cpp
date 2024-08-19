#include <iostream>
#include <string>
using namespace std;

int main() {
    //declare variable
    int cf = 0;

    //get user input in celsius
    std::cout << "Celsius temperature: ";
    std::cin >> cf;
    //mathmatically convert to fahrenheit
    cf = cf * 9;
    cf = cf / 5;
    cf = cf + 32;
    //output temp in fahrenheit
    std::cout << "In fahrenheit: " << cf;
    return 0;
}