#include <iostream>
#include "process.h"
using std::cout;
using std::endl;

void Process::planProcess() 
{
    cout << "Planning process started." << endl;
    my_map.mapInfo();
    cout << "Planning process ended." << endl;
}