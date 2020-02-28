#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	if (rate <= 0){
        interestRate = 0;
    }
    else{
        interestRate = rate;
    }
}

double SavingsAccount::calculateInterest() {
	// your code    
    return getBalance() * interestRate;
} 
void SavingsAccount::display(ostream & os) const
{
	// your code
    os << "Account type: Saving" << endl;
    os << "Balance: $ " << getBalance() << endl;
    os << "Interest (%): " << interestRate * 100.0 << endl; 
}