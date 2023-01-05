#include <iostream>

int main()
{
    char ch;
    std::cout << "Enter character: ";
    std::cin >> ch;
    std::cout << "ASCII value of " << ch << (int)ch << std::endl;
    return 0;
}