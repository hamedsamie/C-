#include "BankAccount.hpp"

BankAccount::BankAccount(std::string accountNumber, std::string accountHolderName, double balance)
: m_accountNumber(accountNumber),
m_accountHolderName(accountHolderName),
m_balance(balance)
{

}