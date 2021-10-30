#include<stdio.h>
// #include<iostream>

#include <conio.h>
#include <graphics.h>
// #include "_defs.h"
// #include <sstream>
#include <dos.h>
// using namespace std;
int main()
{
    int gd=DETECT, gm;
    int x, y, i;
    // char data[]="C:\\MinGW64\\MinGW64\\x86_64-w64-mingw32\\include\\GRAPHICS.H";
    // initgraph(&gd, &gm, data);
    initgraph(&gd,&gm,"C:\\MinGW64\\x86_64-w64-mingw32\\include\\GRAPHICS.H");
    x = getmaxx() / 2;
    y = getmaxy() / 2;
    for (i = 30; i <= 250; i++)
    {
        x = 300;
        y = 250;
        delay(50);
        setcolor(i / 8);
        arc(x, y, 0, 360, i + 70);
        settextstyle(0, 0, 3);
        outtextxy(235, 190, "APRIL");
        outtextxy(240, 220, " FOOL ");
        outtextxy(290, 245, " BY ");
        settextstyle(1, 0, 1);
        outtextxy(220, 265, " HIMANSHU GUPTA ");
        outtextxy(220, 265, "😂😂😂");
    }
    getch();
    closegraph();
}

