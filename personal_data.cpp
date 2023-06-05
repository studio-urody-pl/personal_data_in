//stores personal data provided by user
#include <iostream>
#include <fstream> //file management

using namespace std;

string name, surname;
int phone_no;

int main() {
    cout << "Enter your name: "; cin >> name;
    cout << "Enter your surname: "; cin >> surname;
    cout << "Enter your phone number: "; cin >> phone_no;

    fstream file;
    file.open("personal_card.txt", ios::out | ios::app); //create and open file, append data

    file<<name<<endl;
    file<<surname<<endl;
    file<<phone_no<<endl;

    file.close(); // close file
    return 0;
}
