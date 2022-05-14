#include<stdio.h>
#include<graphics.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    int hight=GetSystemMetrics(SM_CYSCREEN);
    int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(1300,700,"");

    //Drawing Ractangle.
    rectangle(50,50,250,190);

    //Drawing Hut.
    rectangle(400,400,800,600);
    rectangle(200,400,400,600);
    line(200,400,300,250);
    line(300,250,400,400);
    line(300,250,700,250);
    line(700,250,800,400);
    rectangle(260,450,340,600);
    rectangle(535,450,665,550);

    getch();
    closegraph();
    return 0;
}
