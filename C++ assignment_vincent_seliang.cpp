/*By: Vincent Alexander Seliang
 *28/9/2016
 *Group 2, Sub-group 3*/

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

int FunctionOne ()
{
    
    //This is question number 3.
    
    float fHeightIncrease = 1.5;
    float fInitializer = 0;
    int nYearOne = 0;
    int nYears = 25;
    int i;
    
    cout << " The amount of sea level increase per annum" << endl << endl;
    for(i = 0; i <= nYears; i++)
    {
        fInitializer += fHeightIncrease;
        cout << "Year " << ++nYearOne << " : " << fInitializer << endl;
    }
}

int FunctionTwo ()
{
    
    //This is question number 6.
    
    float fDistance;
    float fTime;
    float fSpeed;
    int nInitializer;
    int i;
    int nDash;
    
    cout << "Please input the speed of the object." << endl;
    cin >> fSpeed;
    cout << "Please input the time travelled." << endl;
    cin >> fTime;
    
    cout << "Hour" << setw(20) << "Distance travelled" << endl;
    for (nDash = 0; nDash <= 20; nDash++)
    {
        cout << "_";
    }
        cout << endl;
    
    for (i = 0; i <= fTime; i++)
    {
        fDistance = fSpeed * i;
        cout << i << setw (20) << fDistance << endl;
    }
}

int main ()
{
    FunctionOne ();
    FunctionTwo ();
    return 0;
}
