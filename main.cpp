#include <iostream>

void bank();

int main()
{
    system("clear");
    bank();

    return 0;
}

void bank()
{

    int option;
    float total = 0, entry, output;

    std::cout << "Welcome to Linux Bank!" << std::endl;
back:
    std::cout << "Please select an option" << std::endl;

    std::cout << "1.- Money Entry" << std::endl;
    std::cout << "2.- withdraw cash" << std::endl;
    std::cout << "3.- Check Balance" << std::endl;
    std::cout << "4.- Exit" << std::endl;

    std::cout << "Option: ";
    std::cin >> option;

    switch (option)
    {

    case 1:

        std::cout << "Please enter the amount of money you want to deposit: ";
        std::cin >> entry;
        std::cout << "You have deposited $" << entry << " into your account" << std::endl;
        total += entry;

        std::cout << "Your account balance has been updated. You have a: $" << total << " balance" << std::endl;
        system("sleep 1");

        goto back;

    case 2:

        std::cout << "Please enter the amount of money you want to withdraw: ";
        std::cin >> output;

        if (total < output)
        {

            std::cout << "You do not have a sufficient balance to withdraw this amount of money. You have a balance of: $" << total << std::endl;
            system("sleep 1");
        }
        else
        {
            total -= output;

            std::cout << "You have withdrawn: $" << output << " from your account" << std::endl;
            std::cout << "Your account balance has been updated. You have a: $" << total << " balance" << std::endl;
            system("sleep 1");
        }

        goto back;

    case 3:

        std::cout << "Your account balance is: $" << total << std::endl;
        system("sleep 1");
        goto back;

    case 4:

        std::cout << "Thank you for using Linux Bank!" << std::endl;
        system("sleep 1");

        break;

    default:
        goto back;
    }
}
