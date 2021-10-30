
// #include <iostream>
// #include <math.h>
// #include <graphics.h>
// // #include "sstream"

// using namespace std;
// int main()
// {
//     int x, y;
//     int gd = DETECT, gm;
//     // char data[] = "C:\\MinGW\\lib\\libbgi.a";
//     initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a");
//     cout << "Enter the Value of X Co-ordinate : ";
//     cin >> x;
//     cout << "Enter the Value of Y Co-ordinate : ";
//     cin >> y;
//     putpixel(x, y, BLUE);
//     closegraph();
// }

// #include<graphics.h>
#include<dos.h>
#include<windows.h>
// #include<stdlib.h>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
   int gd=DETECT,gm;
   char driver[]="C:\\MinGW64\\MinGW64\\bgi";
   initgraph(&gd,&gm,driver);
	// initwindow(900, 900);
	setcolor(RED);
	// settextstyle(3, 0, 6);
	// outtextxy(10, 10, "PROGRAMMING FUNDAMENTALS");
	// settextstyle(5, 0, 2);
	// outtextxy(150, 80, "SECTIONR");
	// settextstyle(8, 0, 2);
	// outtextxy(250, 80, " SECTIONO");
	//For line 1, Input : x1 = 150, y1 = 150, x2 = 450, y2 = 150
	setcolor(YELLOW);
	line(150, 150, 450, 150);
	//For line 2, Input : x1 = 150, y1 = 200, x2 = 450, y2 = 200
	setcolor(BLUE);
	line(150, 200, 450, 200);
	setcolor(GREEN);
	line(150, 250, 450, 250);
	//For line 2, Input : x1 = 150, y1 = 250, x2 = 450, y2 = 250

	getch();
	closegraph();
	return 0;
}

