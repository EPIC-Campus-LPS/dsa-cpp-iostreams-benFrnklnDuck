#include <iostream>
#include <string>

using namespace std;
int main() {
    //declares variable
    string name = "";
    //asks user's name
    std::cout << "What's your name? :";
    //prompts user for input
    std::cin >> name;
    //Greets user with name
    std::cout << "Hello " << name << "!";
    
    return 0;
}