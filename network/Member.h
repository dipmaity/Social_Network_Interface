#ifndef Member_H
#define Member_H

#include<bits/stdc++.h>
using namespace std;


/// Regular Functions
void LoginScreen();
void listUsers();
void writeUserInfo(ofstream & fout, string & first, string & last, string & year, string & screen);
void registerUser(ofstream & fout, string screen );


///<======================= UserInfo Class ============================>
class UserInfo {
    private:
        string _firstName;
        string _lastName;
        string _birthYear;
        string _screenName;
        vector<string> friends;
        bool isLogOut = true;
    public:
        /// Default Constructor
        UserInfo();
        /// setters and getters
        string getFirstName();
        void setFirstName(string first);
        bool checkRegistered(string frnd);
        void printFrndList(string frnd);
        void printFriendSuggestions(string frnd);
        string getLastName();
        void setLastName(string last);
        string getBirthYear();
        void setBirthYear(string year);
        string getScreenName();
        void setScreenName(string sn);

        /// Member methods
        void signUp();
        void signIn();
        void logOut();
        void displayProfile();
        void addFriend(string frnd);
};
#endif









