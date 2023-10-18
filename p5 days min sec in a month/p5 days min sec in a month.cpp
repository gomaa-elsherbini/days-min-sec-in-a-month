#include <iostream>
#include <string>
//#include <vector>
using namespace std;




short readNumber(string msg)
{
    short num;

    cout << msg;
    cin >> num;

    return num;
}

bool isLeapYear(short year)
{
    return (year % 400 == 0 || ((year % 4 == 0) && (year % 100 != 0)));
}

short numberOfDaysInMonth(short year, short month)
{
    if (month == 2) 
    {
        if (isLeapYear(year))
            return  29;
        else
            return  28;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return  31;

    else if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;

    else
        return 0;
}

int numberOfHoursInMonth(short year, short month)
{
    return (numberOfDaysInMonth(year, month) * 24);
}

int numberOfMinutesInMonth(short year, short month)
{
    return numberOfHoursInMonth(year, month) * 60;
}

int numberOfSecondsInMonth(short year, short month)
{
    return numberOfMinutesInMonth(year, month) * 60;
}




int main()
{
    short year = readNumber("\n\nPlease Enter a year to check?");
    short month = readNumber("\n\nPlease Enter a month to check?");

    cout << "\nNumber Of Days    : [" << month << "] is " << numberOfDaysInMonth(year, month) << "\n";
    cout <<   "Number Of Hours   : [" << month << "] is " << numberOfHoursInMonth(year, month) << "\n";
    cout <<   "Number Of Minutes : [" << month << "] is " << numberOfMinutesInMonth(year, month) << "\n";
    cout <<   "Number Of Seconds : [" << month << "] is " << numberOfSecondsInMonth(year, month) << "\n";



    cout << "\n";
    system("pause>0");

    return main();

}