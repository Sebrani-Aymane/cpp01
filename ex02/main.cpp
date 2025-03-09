#include <iostream>

int main()
{
     std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;        
    std::string& stringREF = str;           

    std::cout << "Memory address: " << &str << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "\nString value: " << str << std::endl;
    std::cout << "Pointer value: " << *stringPTR << std::endl;
    std::cout << "Reference value: " << stringREF << std::endl;

}