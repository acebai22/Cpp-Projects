
#include <iostream>
using namespace std;

void
showMenu ()
{
  cout << "----------MENU----------" << endl
    << "1. Check Balance" << endl
    << "2. Deposit" << endl
    << "3. Withdraw" << endl
    << "4. EXIT PROGRAM" << endl 
    << "------------------------" << endl;
}

int
main ()
{

  int userMenuChoice;
  double balance = 500;
do{
  showMenu ();
  cout << "Enter an option from above: ";
  cin >> userMenuChoice;
  switch (userMenuChoice)
    {
    case 1:
      cout << "Your balance is: $" << balance << endl;
      
      break;
    case 2:
      double depositAmount;
      cout << "Amount to deposit: " << endl;
      cin >> depositAmount;
      balance += depositAmount;
      cout << "New balance: $" << balance << endl;
      
      break;

    case 3:
      double withdrawAmount;
      cout << "Amount to withdraw: ";
      cin >> withdrawAmount;
      if (balance - withdrawAmount < 0){
          cout << "Overdrawn. Withdrawal rejected."<<endl;
          cout<<"Withdrawal must be lower than your current balance of $" << balance <<"."<<endl
          <<"You attempted to withdaw $" << withdrawAmount - balance << " more than was available in your balance."<<endl
          
          <<"New withdrawal amount: ";
          cin >>withdrawAmount;
      }
      balance -= withdrawAmount;
      cout << endl << "New balance: $" << balance << endl;

      
      break;
    case 4:
      cout << "...ending program.";
      break;
    default:
      cout << "Please enter either a 1, 2, 3, or 4." <<endl;
      main ();

    }
} while(userMenuChoice != 4);
  return 0;

}
