// This program stores the integers 50 and 100 in variables and stores the sum o these two in a variable named total. This total is then displayed on the screen.
#include<iostream>
using namespace std;

int main()
{
    int fifty = 50,
    hundred = 100,
    total;

    total = fifty + hundred;

    // display
    cout << "The total of the two integers is " << total << endl;
    return 0;


}