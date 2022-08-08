#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");

    int x,y;
    printf("Enter value for x:");
    scanf("%d",&x);
    printf("Enter value for y:");
    scanf("%d",&y);

    setfillstyle(SOLID_FILL,RED);
    pieslice(x,y,0,60,120);
    outtextxy(x+120,y-60,"RED");

    setfillstyle(SOLID_FILL,GREEN);
    pieslice(x,y,60,130,120);
    outtextxy(x-40,y-150,"GREEN");

    setfillstyle(SOLID_FILL,YELLOW);
    pieslice(x,y,130,220,120);
    outtextxy(x-180,y+30,"YELLOW");

    setfillstyle(SOLID_FILL,BLUE);
    pieslice(x,y,220,360,120);
    outtextxy(x+40,y+130,"BLUE");

    getch();
    closegraph();
    return 0;
}
