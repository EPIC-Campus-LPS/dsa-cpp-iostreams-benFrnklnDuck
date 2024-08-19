#include <iostream>
#include <string>
using namespace std;

int main() {
    //declaring variables
    int num = 0;
    bool ans = false;
    //ask user for number
    std::cout << "Input a number: ";
    //Prompt user for input
    std::cin >> num;
    //determine if it is even and change boolean to reflect
    if (num % 2 == 0) {
        ans = true;
    }
    //output result and end program
    if (ans) {
        std::cout << "even";
    } else {
        std::cout << "not even";
    }
    return 0;
}