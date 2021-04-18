#include <iostream>
#include "check.h"
using namespace std;

int main()
{


   const check c_ob;       //constant object.
   c_ob.c_display();
   check nc_ob;             //non-constant object.
   nc_ob.nc_display();


}
