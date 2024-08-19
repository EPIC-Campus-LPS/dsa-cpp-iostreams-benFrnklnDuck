#include <iostream>
#include <string>
using namespace std;

int main() {
    //creates empty variable
    string echo = "";

    //Takes user input and assigns to variable
    std::cin >> echo;
    
    //outputs the variable
    std::cout << "echo: " << echo;

    return 0;
}