/*Vincent Alexander Seliang
 *CS02
 *2001585562
 *28/9/2016*/


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>

using namespace std;

int FunctionOne ()
{
    
    /*This allow the saving system.*/
    
    ofstream outputFile;
    outputFile.open("C++ Wednesday Assignment.txt");
    
    
    /*This is where the variables are being declared and
     *initialize.*/
    
    const int nInitialVelocity = 0;
    const int nSpeedLimit = 60;
    const int nConstant = 20;
    int nSquaredTime;
    int nTimeReachedToDestination;
    int nPassingSpeedLimit;
    int nFinalVelocity;
    int nTimeSpent;
    int nAcceleration;
    int nDestinationDistance;
    int nDistanceTravelled;
    int i;
    int x;
    int nNumberOfAsterisks;
    bool bPassingSpeedLimit = true;
    bool bTimeReachedToDestination =true;
    
    cout << "Time spent on the road." << endl;
    cin >> nTimeSpent;
    cout << "Distance from destination." << endl;
    cin >> nDestinationDistance;
    cout << "Speed's rate of change." << endl;
    cin >> nAcceleration;
    cout << endl;
    
    if (nTimeSpent < 0)
    {
        abs (nTimeSpent);
    }
    if (nDestinationDistance < 0)
    {
        abs (nDestinationDistance);
    }
    
    outputFile << nTimeSpent << " seconds" << endl;
    outputFile << nDestinationDistance << " meter" << endl;
    outputFile << nAcceleration << " meters pre second square" << endl; 
    
    /*This is where the graphic representation is made*/
    
    for (i = 0; i <= nTimeSpent; i++)
    {
        nSquaredTime = pow (i, 2.0);
        nDistanceTravelled = (nInitialVelocity * i) + ((nAcceleration * nSquaredTime) / 2);
        cout << "Duration: " << i << setw(15) << "Distance: " << nDistanceTravelled << " ";
        outputFile << "Duration: " << i << setw(15) << "Distance: " << nDistanceTravelled << " " << endl;
        nNumberOfAsterisks = nDistanceTravelled / nConstant;
        for (x = 0; x < nNumberOfAsterisks; x++)
        {
            cout <<"*";
            outputFile << "*";
        }
        cout << endl;
    }
    
    /*This part is for finding the time when she passed a certain
     *point.*/
    
    for (int y = 0; y <= nTimeSpent; y++)
    {
        nSquaredTime = pow (y, 2.0);
        nDistanceTravelled = (nInitialVelocity * y) + ((nAcceleration * nSquaredTime) / 2);
        if(nDistanceTravelled >= nDestinationDistance && bTimeReachedToDestination == true)
        {
            nTimeReachedToDestination = y;
            bTimeReachedToDestination = false;
        }
    }
    
    for (int z = 0; z <= nTimeSpent; z++)
    {
        nFinalVelocity = nInitialVelocity + (nAcceleration * z);
        if (nFinalVelocity > nSpeedLimit && bPassingSpeedLimit == true)
        {
            nPassingSpeedLimit = z;
            bPassingSpeedLimit = false;
        }
    }
    
    /*These are for answering the questions ask.*/
    
    int nSpeed = nInitialVelocity + (nAcceleration * nTimeSpent);
    
    if (nSpeed < nSpeedLimit)
    {
        cout << "She did not pass the speed limit." << endl;
        outputFile << "She did not pass the speed limit." << endl;
    }
    else
    {
        if (nPassingSpeedLimit <= 1)
        {
            cout << "She passed the speed limit at " << nPassingSpeedLimit << " second." << endl;
            outputFile << "She passed the speed limit at " << nPassingSpeedLimit << " second." << endl;
        }
        else
        {
            cout << "She passed the speed limit at " << nPassingSpeedLimit << " seconds." << endl;
            outputFile << "She passed the speed limit at " << nPassingSpeedLimit << " seconds." << endl;
        }
    }
    
    if (nDistanceTravelled < nDestinationDistance)
    {
        cout << "She did not reached her destination." << endl;
        outputFile << "She did not reached her destination." << endl;
    }
    else
    {
        if (nTimeReachedToDestination <= 1)
        {
            cout << "She did reached her destination at " << nTimeReachedToDestination << " second." << endl;
            outputFile << "She did reached her destination at " << nTimeReachedToDestination << " second." << endl;
        }
        else
        {
            cout << "She did reached her destination at " << nTimeReachedToDestination << " seconds." << endl;
            outputFile << "She did reached her destination at " << nTimeReachedToDestination << " seconds." << endl;
        }
    }
    outputFile.close();
    cout << "Done.";
}

int main ()
{
    FunctionOne ();
    return 0;
}
