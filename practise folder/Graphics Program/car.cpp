#include <graphics.h>
// #include <bits/c++config.h>
#include <os_defines.h>
// #include <_DEFS.H>
// #include<istream.h>
#include<stdlib.h>
using namespace std;
#include <dos.h>
#include <conio.h>
int main()
{
   int i, j = 0, gd = DETECT, gm;
   char driverPath[]= "C:\\MinGW64\\MinGW64\\bgi";
   char p[]="Press any key to view the moving car";
   initgraph(&gd, &gd, driverPath);
   // std::ostringstream;
   settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
   outtextxy(25, 240, p);

   setviewport(0, 0, 639, 440, 1);

   for (i = 0; i <= 420; i = i + 10, j++)
   {
      rectangle(50 + i, 275, 150 + i, 400);
      rectangle(150 + i, 350, 200 + i, 400);
      circle(75 + i, 410, 10);
      circle(175 + i, 410, 10);
      // setmode(j);
      delay(100);

      if (i == 420)
         break;

      clearviewport();
   }

   getch();
   closegraph();
   return 0;
}

   // getch();







