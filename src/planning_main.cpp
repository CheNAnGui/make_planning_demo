#include <iostream>
#include "process.h"
using std::cout, std::endl;

int main() {
    cout << "Starting planning process..." << endl;
    Process pro;
    pro.planProcess();
    cout << "Planning process finished." << endl;
    return 0;
}
