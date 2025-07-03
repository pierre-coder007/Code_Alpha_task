#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void login() {
    while (true) {
        string user3, pass3, sun, spw;
        cout << "enter your username: ";
        cin >> user3;
        cout << "enter your password: ";
        cin >> pass3;
        ifstream read(user3 + ".txt");
        getline(read, sun);
        getline(read, spw);
        if (sun == user3 && spw == pass3) {
            cout << "successfully logged in !" << endl;
            cout << "thank you for using this system :)";
            exit(0);
        }
        else { cout << "you have enterd a wrong password or username please try again " << endl; }
    }
}

void registration() {
    int choice2;
    string user1, user2, pass1, pass2;
    while (true) {
        cout << "please enter your new username: ";
        cin >> user1;
        cout << "confirm your username: ";
        cin >> user2;
        if (user1 != user2) {
            cout << "usernames dont match...try again" << endl;
        }
        else { break; }
    }
    while (true) {
        cout << "please enter your new password: ";
        cin >> pass1;
        cout << "confirm your password: ";
        cin >> pass2;
        if (pass1 != pass2) {
            cout << "passwords dont match...try again" << endl;
        }
        else { break; }
    }
    ofstream file;
    file.open(user1 + ".txt");
    file << user1 << endl << pass1;
    file.close();
    cout << "welcome " << user1 << " !" << endl;
    cout << "your account has been created successfully ,now you can login..." << endl;
    while (true) {
        cout << "press (1) if you want to login" << endl;
        cout << "press (2) if you want to exit" << endl;
        cin >> choice2;
        switch (choice2)
        {
        case 1:
            login();
            break;
        case 2:
            cout << "thank you for using this system :)" << endl;
            exit(0);
        default:
            cout << "you have enterd a wrong input..." << endl;
        }
    }
}

int main() {
    int choice;
    cout << "welcome to C++ login and registration programe ! " << endl;
    while (true) {
        cout << "------------------------------------------------" << endl;
        cout << "press (1) if you want to create a new account " << endl;
        cout << "press (2) if you want to login " << endl;
        cout << "press (3) if you want to exit" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
            registration();
            break;
        case 2:
            login();
            break;
        case 3:
            exit(0);
        default:
            cout << "you have enterd a wrong input..." << endl;
        }
    }
    return 0;
}