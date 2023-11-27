// Filename: MyClass.hpp

#ifndef BANK_ACCOUNT_HPP  // Include guard to prevent multiple inclusion
#define BANK_ACCOUNT_HPP

#include <string>

class BankAccount 
{
public:
    // Constructor
    BankAccount(std::string accountNumber, std::string accountHolderName, double balance);

private:
    std::string m_accountNumber;
    std::string m_accountHolderName;
    double m_balance;
};

#endif  // BANK_ACCOUNT_HPP
