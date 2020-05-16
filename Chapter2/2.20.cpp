#include <iostream>
using namespace std;
// Answer to question 20
int main()
{
    short int sqftCoverPerGallon = 340,
              numberOfCoats = 2,
              height = 6,
              length = 100,
              area;
    float totalSqftToBePainted,
          numGallons;

    // Calculates Area to be painted
    area = height * length;
    // Calculates total  sgft to be painted
    totalSqftToBePainted = area * numberOfCoats;
    // Calculates number of gallons to be used
    numGallons = totalSqftToBePainted/sqftCoverPerGallon;
    cout << "Total num of gallons needed to paint the area  " << numGallons << endl;

    return 0;
} 