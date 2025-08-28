#include <iostream>
#include "show_result.h"
#include <graphics.h>
using std::cout, std::endl;

void ShowResult::drawResult() {
    initgraph(1000,1000);
    setbkcolor(WHITE);
    cleardevice();

    cout << "Drawing result..." << endl;
    setlinecolor(BLACK);
    setlinestyle(PS_SOLID, 4);

    circle(150, 150, 50);
    circle(300, 300, 75);

    system("pause");
    closegraph();
}
