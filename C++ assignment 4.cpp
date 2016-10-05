/*Vincent Alexander Seliang
 *CS02
 *2001585562*/

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
#include <algorithm>
#include <vector>

using namespace std;

ofstream outputFile;

void arrSelectionSort (int *arr[], int size)
{
    int startScan, minIndex;
    int *minElem;
    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (*arr[index] < *minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << arr[count] << " ";
        outputFile << arr[count] << " ";
    }
    cout << endl;
}

void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << *(arr[count]) << " ";
        outputFile << *(arr[count]) << " ";
    }
    cout << endl;
}

int main ()
{
    outputFile.open ("c++ assignment 4.txt");
    int NUM_DONATIONS;
    cout << "Numbers of Donation." << endl;
    outputFile << "Numbers of Donation." << endl;
    cin >> NUM_DONATIONS;
    outputFile << NUM_DONATIONS << endl;
    int donations [NUM_DONATIONS];
    for (int x = 0; x < NUM_DONATIONS; x++)
    {
        cout << "Donation." << endl;
        outputFile << "Donation." << endl;
        cin >> donations [x];
        outputFile << donations [x] << endl;
        if (donations [x] < 0)
        {
            abs (donations [x]);
        }
    }
    int *arrPtr [NUM_DONATIONS];
    for (int count = 0; count < NUM_DONATIONS; count++)
    {
        arrPtr[count] = &donations[count];
    }
    arrSelectionSort (arrPtr, NUM_DONATIONS);
    cout << "The donations, sorted in ascending order are: \n";
    outputFile << "The donations, sorted in ascending order are: \n";
    showArrPtr (arrPtr, NUM_DONATIONS);
    cout << "The donations, in their original order are: \n";
    outputFile << "The donations, in their original order are: \n";
    showArray (donations, NUM_DONATIONS);
    outputFile.close();
    return 0;
}
