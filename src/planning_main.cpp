#include <iostream>
#include "process.h"
#include "show_result.h"
using std::cout, std::endl;

int main() {
    cout << "Starting planning process..." << endl;
    Process pro;
    pro.planProcess();
    cout << "Planning process finished." << endl;

    cout << "Showing result..." << endl;
    ShowResult showResult;
    showResult.drawResult();
    cout << "Result shown." << endl;

    return 0;
}
