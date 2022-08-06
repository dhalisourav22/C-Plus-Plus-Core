#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    //int hight=GetSystemMetrics(SM_CYSCREEN);
    //int width=GetSystemMetrics(SM_CXSCREEN);
    //initwindow(1000,600,"");

    float x1,y1,x2,y2;
    int colorCode;

    printf("Enter The X1 : ");
    scanf("%f",&x1);
    printf("Enter The Y1 : ");
    scanf("%f",&y1);
    printf("Enter The X2 : ");
    scanf("%f",&x2);
    printf("Enter The Y2 : ");
    scanf("%f",&y2);
    printf("Enter The Color Code(like 10 is Green) : ");
    scanf("%d",&colorCode);

    float dellX = abs(x2-x1);
    float dellY = abs(y2-y1);
    float m = dellY/dellX;

    bool conditionForLoop = true;
    for(int i=0; conditionForLoop==true; i++)
    {
        putpixel(x1,y1,colorCode);
        if(x1==x2 || y1==y2)
        {
            conditionForLoop = false;
        }
        //Case 1;
        if(m<1)
        {
            x1=x1+1;
            y1=y1+m;
        }
        //Case 2;
        else if(m>1)
        {
            x1=x1+(1/m);
            y1=y1+1;
        }
        //Case 3;
        else if(m==1)
        {
            x1=x1+1;
            y1=y1+1;
        }
        delay(1000);
    }
    getch();
    closegraph();
    return 0;
}

