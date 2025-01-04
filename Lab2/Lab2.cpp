#include <graphics.h>
#include <conio.h>
#include <iostream>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    setcolor(WHITE);

    line(450,250,900,250);

    line(0,250,200,250);

    circle(250, 200, 20);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(250, 200, WHITE);

    int tri[] = {250, 100, 300, 150, 200, 150, 250, 100};
    drawpoly(4, tri);

    int roof[] = {250,100,400,70,450,120, 300, 150,250,100};
    setfillstyle(SOLID_FILL, RED);
    fillpoly(5, roof);

    int sidewall[] = {200,150,300,150,300,300,200,300,200,150};
    drawpoly(5, sidewall);

    int frontwall[] = {300,150,450,120,450,250,300,300,300,150};
    drawpoly(5, frontwall);

    int window[] = {320,165,350,158,350,183,320,190,320,165};
    drawpoly(5, window);

    int window2[] = {400,145,430,138,430,163,400,170,400,145};
    drawpoly(5, window2);


    int door[] = {365,210,395,200,395,268,365,278,365,210};
    drawpoly(5, door);

    int trunk[] = {100,300,90,300,90,190,100,190,100,300};
    drawpoly(5, trunk);
    setfillstyle(SOLID_FILL, GREEN);
    fillpoly(5, trunk);

    int leaf1[] = {60,220,130,220,95,170,60,220};
    drawpoly(4,leaf1);
    setfillstyle(SOLID_FILL, GREEN);
    fillpoly(4, leaf1);

    int leaf2[] = {60,190,130,190,95,140,60,190};
    drawpoly(4,leaf2);
    setfillstyle(SOLID_FILL, GREEN);
    fillpoly(4, leaf2);

    getch();
    closegraph();
    return 0;
}
