#include <iostream>
#include <fstream>
#include <string.h>

void login();
void newuser();
void forgot();

int main()
{
    system("clear");

    int option;
    back:
    std::cout << "  _____________________________________" << std::endl;
    std::cout << " |                                     |" << std::endl;
    std::cout << " |       ~ L O G I N  P A G E ~        |" << std::endl;
    std::cout << " |_____________________________________|" << std::endl;
    std::cout << " | Press 1 to login                    |" << std::endl;
    std::cout << " | Press 2 to register                 |" << std::endl;
    std::cout << " | Press 3 if you forgot your password |" << std::endl;
    std::cout << " | Press 4 to exit                     |" << std::endl;
    std::cout << " | Option: ";

    std::cin >> option;

    switch (option)
    {
    case 1:
        login();
        break;

    case 2:
        newuser();
        break;

    case 3:
        forgot();
        break;

    case 4:
        std::cout << "Goodbye!!" << std::endl;
        break;

    default:
        goto back;
    }

    system("pause");
    return 0;
};

void login()
{
    system("clear");

    std::cout << "Hello World";

    system("pause");
};

void newuser()
{
    system("clear");

    std::cout << "Hello World";

    system("pause");
};

void forgot()
{
    system("clear");

    std::cout << "Hello World";

    system("pause");
};