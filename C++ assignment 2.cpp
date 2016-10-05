#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

float FunctionOne ()
{
    /*This function is for calculating the area of a
     *triangle.*/
    
    float nSideA;
    float nSideB;
    float nSideC;
    float nArea;
    float nA;
    float nAOne;
    float nB;
    float nC;
    float nSemiPerimeter;
    
    cin >> nSideA >> nSideB >> nSideC;
    
    if(nSideA + nSideB > nSideC || nSideA + nSideC > nSideB || nSideB + nSideC > nSideA)
    {
        cout << "This triangle is contructable." << endl;
        nSemiPerimeter = (nSideA + nSideB + nSideC) / 2;
        nAOne = abs (nSemiPerimeter - nSideA);
        nB = abs (nSemiPerimeter - nSideB);
        nC = abs (nSemiPerimeter - nSideC);
        nA = nSemiPerimeter * nAOne * nB * nC;
        nArea = sqrt (nA);
        cout << nAOne << endl << nB << endl << nC << endl;
        cout << "The semiperimeter of the triangle is " << nSemiPerimeter << endl;
        cout << "The area of the triangle is " << nArea << endl;
    }
    else if (nSideA + nSideB == nSideC || nSideA + nSideC == nSideB || nSideB + nSideC == nSideA)
    {
        cout << "This triangle is contructable." << endl;
        if (nSideA + nSideB == nSideC)
        {
            float nArea = (nSideA * nSideB) / 2;
        }
        else if (nSideA + nSideC == nSideB)
        {
            float nArea = (nSideA * nSideC) / 2;
        }
        else
        {
            float nArea = (nSideB * nSideC) / 2;
        }
        cout << "The area of the triangle is " << nArea << endl;
    }
    else
    {
        cout << "This triangle is not constuctable." << endl;
    }
}

float FunctionTwo ()
{
    
    /*This function does convert seconds into other
     *form of time.*/
    
    int nSeconds;
    float fMinutes, fHours, fDays;
    cin >> nSeconds;
    
    if (nSeconds > 60)
    {
        fMinutes = nSeconds / 60;
        if (fMinutes > 1)
        {
            cout << fMinutes << "Minutes";
        }
        else
        {
            cout << fMinutes << "Minute";
        }
    }
    
    if (nSeconds > 3600)
    {
        fHours = nSeconds / 60;
        if (fHours > 1)
        {
            cout << fHours << "Hours";
        }
        else
        {
            cout << fHours << "Hour";
        }
    }
    
    if (nSeconds / 86400)
    {
        fDays = nSeconds / 86400;
        if (fDays > 1)
        {
            cout << fDays << "Days";
        }
        else
        {
            cout << fDays << "Day";
        }
    }
}

int FunctionThree ()
{
    
    /*This funcion is for making a random question regarding
     *addition for little kids.*/
    
    srand (time(NULL));
    int nNumberOne = rand () % 1000;
    int nNumberTwo = rand () % 1000;
    int nAnswer;
    
    int nSum = nNumberOne + nNumberTwo;
    
    cout << "Write down the answer of " << nNumberOne << "+" << nNumberTwo << endl;
    cin >> nAnswer;
    
    if(nAnswer == nSum)
    {
        cout << "It is correct! Congratulation!";
    }
    else
    {
        cout << "Sorry, it is " << nSum << ".";
    }
}

int FunctionFour ()
{
    
    /*This function is for calculating the amount of
     *comission a salesperson earns.*/
    
    int nSales;
    cin >> nSales;
    int nPrice = 99;
    float nNet;
    
    if (nSales == 0)
    {
        cout << "Invalid data.";
    }
    else if (nSales < 10)
    {
        nNet = nPrice * nSales;
        cout << "The price is " << nNet;
    }
    else if (nSales >= 10 && nSales < 20)
    {
        nNet = nPrice * nSales * 0.2;
        cout << "The price is " << nNet;
    }
    else if (nSales >= 20 && nSales < 30)
    {
        nNet = nPrice * nSales * 0.3;
        cout << "The price is " << nNet;
    }
    else if (nSales >= 30 && nSales < 40)
    {
        nNet = nPrice * nSales * 0.4;
        cout << "The price is " << nNet;
    }
    else
    {
        nNet = nPrice * nSales * 0.5;
        cout << "The price is " << nNet;
    }
}

int FunctionFive ()
{
    
    /*This function is use for counting the day in a
     *month in a year.*/
    
    int nMonth;
    int nYear;
    int nDays;
    bool bIsItLeapYear;
    cout << "Enter the month (1-12): ";
    cin >> nMonth;
    cout << "Enter the year: ";
    cin >> nYear;
    
    if (nYear % 100 == 0 && nYear % 400 == 0 || nYear % 100 != 0 && nYear % 4 == 0)
    {
        bIsItLeapYear = true;
    }
    else
    {
        bIsItLeapYear = false;
    }
    
    switch (nMonth)
    {
        case 1 :
            nDays = 31;
            cout << "January" << endl << nDays << " days";
            break;
        case 2 :
            if (bIsItLeapYear)
            {
                nDays = 29;
            }
            else
            {
                nDays = 28;
            }
            cout << "Febuary" << endl << nDays << " days";
            break;
        case 3 :
            nDays = 31;
            cout << "March" << endl << nDays << " days";
            break;
        case 4 :
            nDays = 30;
            cout << "April" << endl << nDays << " days";
            break;
        case 5 :
            nDays = 31;
            cout << "May" << endl << nDays << " days";
            break;
        case 6 :
            nDays = 30;
            cout << "June" << endl << nDays << " days";
            break;
        case 7 :
            nDays = 31;
            cout << "July" << endl << nDays << " days";
            break;
        case 8 :
            nDays = 30;
            cout << "August" << endl << nDays << " days";
            break;
        case 9 :
            nDays = 31;
            cout << "September" << endl << nDays << " days";
            break;
        case 10 :
            nDays = 30;
            cout << "October" << endl << nDays << " days";
            break;
        case 11 :
            nDays = 31;
            cout << "November" << endl << nDays << " days";
            break;
        case 12 :
            nDays = 30;
            cout << "December" << endl << nDays << " days";
            break;
        default:
            cout << "Invalid data.";
            break;
    } 
}

int FunctionSix ()
{
    /*This function display the runners' names and their time
     *required to finish the race.*/
    
    string sRacerOne, sRacerTwo, sRacerThree;
    int nTimeOne, nTimeTwo, nTimeThree;
    int i;
    int nFastest;
    
    cout << "Please input three names: " << endl;
    cout << "Racer One: ";
    cin >> sRacerOne;
    getline(cin, sRacerOne);
    cout << "Racer Two: ";
    cin >> sRacerTwo;
    getline(cin, sRacerTwo);
    cout << "Racer Three: ";
    cin >> sRacerThree;
    getline(cin, sRacerThree);
    string sNames [3] = {sRacerOne, sRacerTwo, sRacerThree};
    
    cout << "Please input their time required to finish the race: " << endl;
    cout << "Time One: ";
    cin >> nTimeOne;
    if (nTimeOne < 0)
    {
        abs (nTimeOne);
    }
    cout << "Time Two: ";
    cin >> nTimeTwo;
    if (nTimeOne < 0)
    {
        abs (nTimeTwo);
    }
    cout << "Time Three: ";
    cin >> nTimeThree;
    if (nTimeOne < 0)
    {
        abs (nTimeThree);
    }
    int nTime [3] = {nTimeOne, nTimeTwo, nTimeThree};
    int nSmallest = nTime[0];
    int nArraySize = 3;
    
    for (i = 0; i <= 3; i++)
    {
        if (nTime[i] <= nSmallest && i != nArraySize-1) 
        {
            nSmallest = nTime[i];

        }
        else if (nTime[i] <= nSmallest && i == nArraySize-1)
        {
            nSmallest = nTime[i];
            cout << nSmallest << endl;
        }
    }
    cout << "The fastest racer is " << sNames [i] << " with only " << nSmallest << "." << endl;
}
    
    

int main ()
{
    int nOption;
    cout << "Input number to execute a function: ";
    cin >> nOption;
    
    switch (nOption)
    {
    case 1:
        FunctionOne ();
        break;
    case 2 :
        FunctionTwo ();
        break;
    case 3 :
        FunctionThree ();
        break;
    case 4 :
        FunctionFour ();
        break;
    case 5 :
        FunctionFive ();
        break;
    case 6 :
        FunctionSix ();
        break;
    default :
        cout << "Invalid data.";
        break;
    }
    return 0;
}
