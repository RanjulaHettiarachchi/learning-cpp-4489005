// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::cout << "Insert Your Name: " << std::endl;
    std::string str;
    std::cin >> str;
    std::cout << "Hello!" << str << " How are You? " << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
