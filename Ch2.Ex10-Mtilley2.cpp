// Ch2.Ex10-Mtilley2.cpp 

#include <iostream>
using namespace std;

int main()
{    
    int num;

    std::cout << " Enter number of Gallons: ";
    std::cin >> GallonsUsed;
    std::cout << "Enter number of Miles driven";
    std::cin >> MilesDriven;
        
    const float MilesDriven = 375;
    const float GallonsUsed = 15;

    float MPG = MilesDriven / GallonsUsed;

    cout << endl;
    cout << "A car that holds 15 gallons gas and that \n";
    cout << "can travel 375 miles before refueling will \n";
    cout << "use " << MPG << " Miles Per Gallon.\n";
    cout << endl; 

    return 0;
    
}

