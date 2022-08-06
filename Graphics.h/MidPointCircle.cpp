#include<stdio.h>
#include<graphics.h>
int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");

    int hight=GetSystemMetrics(SM_CYSCREEN);
    int width=GetSystemMetrics(SM_CXSCREEN);
    initwindow(1000,600,"");

    float x0,y0,r;
    int colorCode;

    printf("Enter The Origin Of The Circle : \n");
    printf("\t\t  Enter The X0 : ");
    scanf("%f",&x0);
    printf("\t\t  Enter The Y0 : ");
    scanf("%f",&y0);
    printf("Enter The Radius Of The Circle : ");
    scanf("%f",&r);
    printf("Enter The Color Code(like 10 is Green) : ");
    scanf("%d",&colorCode);

    float xk = 0;
    float yk = r;
    float pk = 1-r;

    bool conditionForLoop = true;
    for(int i=0;conditionForLoop==true;i++){

        //(But this is in bellow side, because the graph has only two axis X and Y);
        putpixel(xk+x0,yk+y0,colorCode); //First octant;
        putpixel(yk+y0,xk+x0,colorCode); //Second octant;

        //By decreasing the value of X;
        putpixel(x0-xk,yk+y0,colorCode); //Third octant(Mirroring the first octant);
        putpixel(y0-yk,xk+x0,colorCode); //Fourth octant(Mirroring the second octant);

        //By decreasing the value of Y;
        putpixel(xk+x0,y0-yk,colorCode); //5th octant(Mirroring the first octant); //Ultimate first octant;
        putpixel(yk+y0,x0-xk,colorCode); //6th octant(Mirroring the second octant);

        //By decreasing the value of Y;
        putpixel(x0-xk,y0-yk,colorCode); //Third octant(Mirroring the first octant);
        putpixel(y0-yk,x0-xk,colorCode); //Fourth octant(Mirroring the second octant);


        if(xk>=yk){
            conditionForLoop = false;
        }
        if(pk<0){
            pk=pk+(2*xk)+3;   //we use this, under the loop because we need to calculate this pk in every iteration.
            xk=xk+1;
            yk=yk;
        }
        else{
            pk=pk+(2*(xk-yk))+5;
            xk=xk+1;
            yk=yk-1;
        }
        delay(100);
    }
    getch();
    closegraph();
    return 0;
}
