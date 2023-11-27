#include <iostream>

#include "BankAccount.hpp"

int main()
{
    std::cout << "test" << std::endl;
    std::string accountNumber = "1234";
    std::string accountHolderName = "Hamed S";
    double balance = 2000.0;
    BankAccount bankAccountObj(accountNumber, accountHolderName, balance);
    return 0;
}
