#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Member.h"

using namespace std;

int main()
{
    char input;
    UserInfo inputInfo;

    cout << "Welcome to Social Network Interface ..." << endl << endl;

    do
    {
        LoginScreen();
        cin >> input;
        cout << endl;
        if (input == '1' )
        {
            inputInfo.signUp();
        }
        else if (input == '2' )
        {
            inputInfo.signIn();
        }
        else if(input == '3')
        {
            listUsers();
            cout << endl;
            system("PAUSE");
            cout << endl;

        }
        else if(input == '4'){
            inputInfo.displayProfile();
        }
        else if ( input == '5')
        {
            cout << "Thank you for using our Social Network Interface." << endl;
        }
        else{
            cout << "Invalid Choice" << endl;
        }
    } while (input != '5');

    return 0;
}
