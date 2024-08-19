#include <iostream>
#include <string>
using namespace std;

int main() {
    //declare variables
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    //ask user for numbers
    std::cout << "Input two numbers: ";
    //prompt user for input
    std::cin >> num1 >> num2;
    //find the sum and output it
    num3 = num1 + num2;
    std::cout << num3;
}