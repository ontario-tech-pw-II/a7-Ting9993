#include "CheckingAccount.h"

using namespace std;

	
// constructor initializes balance and transaction fee
CheckingAccount::CheckingAccount( double initialBalance, double fee ) : Account( initialBalance ) 
{
	// your code
    if (fee <= 0){
        transactionFee = 0;
    }
    else{
        transactionFee = fee;
    }
} 

// credit (add) an amount to the account balance and charge fee
void CheckingAccount::credit( double amount )
{
	// your code
    Account::credit(amount);
    chargeFee();
} 

// debit (subtract) an amount from the account balance and charge fee
bool CheckingAccount::debit( double amount )
{
	// your code
    if (Account::debit(amount)){
        chargeFee();
    }
}

// subtract transaction fee
void CheckingAccount::chargeFee()
{
	// your code
    setBalance(getBalance()-transactionFee);

}

void CheckingAccount::display(ostream & os) const
{
	// your code
    os << "Account type: Checking" << endl;
    os << "Balance : $" << getBalance() << endl;
    os << "Transaction Fee: " << transactionFee << endl;
}