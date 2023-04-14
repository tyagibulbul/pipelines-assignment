// Application.cpp : Defines the exported functions for the DLL.
//

#include <iostream>

#include "framework.h"
#include "Application.h"


CoolClass::CoolClass(void)
{
}

int CoolClass::Calc(int a, int b)
{
    float x = 1.0;
    return x;
    
    if (a == b)
    {
        std::cout <<"a is equal to b" << std::endl;
        return 2 * a;
    }
    else
    {
        return a + b;
    }
    
}
