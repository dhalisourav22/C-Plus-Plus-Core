#include<stdio.h>
#include<graphics.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    //int hight=GetSystemMetrics(SM_CYSCREEN);
    //int width=GetSystemMetrics(SM_CXSCREEN);
    //initwindow(1000,600,"");

    int x1,y1,x2,y2;
    printf("Enter The X1 : ");
    scanf("%d",&x1);
    printf("Enter The Y1 : ");
    scanf("%d",&y1);
    printf("Enter The X2 : ");
    scanf("%d",&x2);
    printf("Enter The Y2 : ");
    scanf("%d",&y2);

    int x,y,r;
    printf("Enter The Center(X) of circle : ");
    scanf("%d",&x);
    printf("Enter The Center(Y) of circle : ");
    scanf("%d",&y);
    printf("Enter The Radius(R) of circle : ");
    scanf("%d",&r);

    line(x1,y1,x2,y2);
    circle(x,y,r);

    getch();
    closegraph();
    return 0;
}
