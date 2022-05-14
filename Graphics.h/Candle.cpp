#include<stdio.h>
#include<graphics.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    int hight=GetSystemMetrics(SM_CYSCREEN);
    int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(1300,700,"");

    setcolor(GREEN);
    line(200,200,200,600);
    line(200,600,400,600);
    line(400,200,400,600);
    setcolor(BLUE);
    line(190,200,190,610);
    line(190,610,410,610);
    line(410,200,410,610);
    line(190,200,200,200);
    line(400,200,410,200);
    setcolor(WHITE);
    ellipse(300,200,0,360,100,30);
    setcolor(RED);
    line(250,200,350,200);
    line(250,200,300,30);
    line(300,30,350,200);


    getch();
    closegraph();
    return 0;
}

