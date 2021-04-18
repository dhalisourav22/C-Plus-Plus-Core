#include <iostream>
#include<conio.h>
#include "student.h"
using namespace std;

int main()
{
    student sabuj;
    student *p = &sabuj;
    p -> display();
    return 0;
}
