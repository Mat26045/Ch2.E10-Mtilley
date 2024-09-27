// Ch2.Ex10-Mtilley2.cpp 

#include <iostream>
using namespace std;

int main()
{    
    int num;

    float GallensUsed;
    Float MilesDriven;
    
    std::cout << " Enter number of Gallons: ";
    std::cin >> GallonsUsed;
    std::cout << "Enter number of Miles driven: ";
    std::cin >> MilesDriven;
        

    float MPG = MilesDriven / GallonsUsed;

   std::cout <<"Our car gets " << MPG << " miles per gallon." << std::endl;

    return 0;
    
}

