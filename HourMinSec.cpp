


#include <iostream>

using namespace std;


int main()
{
    //Variables
    int hours;
    int minutes;
    int seconds;
    int userNum;

    // inital printout
    cout << "*******************************************************************" << endl;
    cout << "*************** Welcome to my first program ***********************" << endl;
    cout << "Convert a large number of seconds into hours, minutes, and seconds." << endl;
    cout << "******************************************************************* \n" << endl;

    // prompt user: ask for seconds
    cout << "Please enter a large number of seconds: ";
    cin >> userNum;

    // find seconds
    seconds = userNum % 60;
    // find minutes
    userNum /= 60;
    minutes = userNum % 60;
    // find hours
    hours = userNum / 60;


    // print out final statement
    cout << "The number of hours in the number is: " << hours << endl;
    cout << "The number of minutes in the number is: " << minutes << endl;
    cout << "The number of seconds in the number is: " << seconds << endl;

    system("pause");
    return 0;
}
