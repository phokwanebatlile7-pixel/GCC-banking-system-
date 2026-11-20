#include <iostream>

using namespace std;
int displayMenu();


    //store customer details
    string names[3]={"John","Mary","Peter"};
    int accountNumbers[3]={1001,1002,1003};
    int pins[3]={1111,2222,3333};
    double balances[3]={5000,3000,7000};

    int FindAccount(int accountNumber);
    int login();
    int displayMenu();
    int readInt(string message);
    double readAmount(string message);

    void deposit(int userIndex);
    void withdraw(int userIndex);
    void sendCash(int userIndex);
    void checkBalance(int userIndex);

    int main()
    {
        int choice;
        int userIndex;

        cout<<"****************WELCOME TO GCC BANK*******************"<<endl;
        userIndex=login();

        do
        {
            choice =displayMenu();
            switch(choice)
            {
            case 1:
                deposit(userIndex);
                break;


            case 2:
                    withdraw(userIndex);
                    break;
            case 3:
                sendCash(userIndex);
                break;

            case 4:
                checkBalance(userIndex);
                break;

            case 5:
                cout<<endl;
                cout<<"Thank you for banking with GCC BANK"<<endl;
                cout<<"goodbye"<<endl;
                break;

            default:
                cout<<"Invalid choice,try again"<<endl;



            }
        }while(choice !=5);
        return 0;
        }
        int findAccount(int accountNumber)
        {
            for(int i=0; i<3; i++)
            {
                if(accountNumber[i]== accountNumber)
                {
                    return i;
                }
            }
            return -1;
        }


}
     int login()
     {
         int accountNumber;
         int enteredPin;
         int userIndex;

         while(true)
         {
             cout<<endl;
             cout<<"Enter your account number:";accountNumber= readInt ("Enter your account number:"); userIndex = findAccount(accountNumber);
             if(userIndex==-1)

             {
                 cout<<"Account not found, Try again"<<endl;
             }
             else
             {
              enteredPin =readInt ("Enter uour Pin:");
               if(enteredPin ==pins[userIndex])
               {
                   cout<<endl;
                   cout<<"Login successful"<<endl;
                   cout<<"Welcome,"<<names[userIndex]<<endl;

                   return userIndex;
               }
             else
             {
                 cout<<"Incorrect Pin, Try again."<<endl;
             }

             }
         }
     }

     int displayMenu()
     {
         int choice;
         cout<<endl;
         cout<<"*******************GCC BANK MENU********************"<<endl;
         cout<<"1. Deposit"<<endl;
         cout<<"2. Withdraw"<<endl;
         cout<<"3. SendCash"<<endl;
         cout<<"4. CheckBalance"<<endl;
         cout<<"5. Exit"<<endl;

         cout<<"*****************************************************"<<endl;

         choice =readInt("Enter your choice:");
         return choice;
     }
      int readInt(string message)
      {
          int number;
          while(true)
          {
              cout<<message;
              cin>>number;

              if(cin.fail())
              {
                  cin.clear();
                  cin.ignore(10000,'\n');
                  cout<<"Invalid input. Please enter a number."<<endl;
              }
              else
              {
                  cin.ignore(10000, '\n');

                  cout<<"Invalid amount. Enter a number."<<endl;

              }
              else
              {
                  cin.ignore(10000,'\n');
                  if(amount>0)
                  {
                      return amount;
                  }
                  else
                  {
                    cout<<"Amount must be greater than zero"<<endl;
                  }
              }
          }
      }


         void deposit(int userIndex)

     }
     double amount;
     cout<<"***DEPOSIT***"<<endl;
     amount= readAmount("Enter amount to deposit: R");

     balances[userIndex]=balances[userIndex]+amount;

     cout<<endl;
     cout<<"Deposit successful"<<endl;
     cout<<"Amount deposited: R"<<amount<<endl;
     cout<<"New balance:R"<<balances[userIndex]<<endl;

     }

     void withdraw(int userIndex)
     {
         double amount;

         cout<<endl;
         cout<<"***WITHDRAW***"<<endl;

         amount= readAmount("Enter amount to Withdraw: R");

         if(amount <= balances[userIndex])
         {
             balances[userIndex]=balances[userIndex] - amount;

             cout<<endl;
             cout<<"Withdrawal successful"<<endl;
             cout<<"Amount withdrawn: R"<<amount<<endl;
             cout<<"Remaining balance: R"<< balances[userIndex]<<endl;
         }
         else
         {
             cout<<endl;
             cout<<"Insufficient funds"<<endl;
             cout<<"Your balance is : R"<<balances[userIndex]<<endl;

         }

     }
     void sendCash(int userIndex)
     {
         int recipientAccount;
         int recipientIndext;
         double amount;

         cout<<endl;
         cout<<"****SEND CASH****"<<endl;

         recipientAccount =readInt("Enter recipient account number:");

         recipientIndex= findAccount(recipientAccount)
         if(recipientIndex ==-1)
         {
             cout<<"You cannot send money your own account."<<endl
         }
         else
         {
             amount = readAmount("Enter amount to send: R");

             if(amount<= balances[userIndex])

             {
                 balances[userIndex]= balances[userIndex]-amount;

                 balances[recipientIndex] = balances[recipientIndex] + amount;

                 cout<<endl;
                 cout<<"Cash sent successfully"<<endl;
                 cout<<"Recipient:"<< names[recipientIndex]<<endl;
                 cout<<"Amount sent: R"<<amount<<endl;
                 cout<<"Your new balance: R:"<<balance[userIndex]<<endl;


             }
            else
            {
                cout<<"Insufficient funds"<<endl;

            }
         }
     }
         void checkBalance(int userIndex)
         {
             cout<<endl;
             cout<<"****ACCOUNT DETAILS****"<<endl;
             cout<<"Account holder:"<<names[userIndex]<<endl;

             cout<<"Account number :"<<accountnumbers[userIndex]<<endl;
             cout<<"Current balance :R"<<balances[userIndex]<<endl;
             cout<<"**********************************************"<<endl;

         }
     }
