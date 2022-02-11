// This program shows variable initialization.
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string month = "Febuary";       //month is initialized to "Febuary"
    int year,                       // year i no initialized 
    days = 29;                      // days is initialized to 29

    year = 1776;                    // Now year is assigned a value

    cout << "In " << year << " " << month
         << " had " << days << " days.\n";


return 0;

}