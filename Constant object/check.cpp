#include "check.h"
#include <iostream>

using namespace std;
void check :: c_display() const
{
    cout<< "i am a constant functions by calling a constant variable"<<endl;
}
void check :: nc_display()
{
    cout<< "i am a non-constant functions by calling a non-constant variable";
}
