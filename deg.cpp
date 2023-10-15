#include "polynomial.h"
#include <iostream>
#include <vector>
using namespace std;

int deg(polynomial p1)
{
    double dg,s,v;
    dg=0;
    s=p1.px.size();
    for (int i=0; i<s;i++)
    {
        v=p1.px[i];
        if (v>dg)
        {
            dg=v;
        }
    }


    return dg;
}
