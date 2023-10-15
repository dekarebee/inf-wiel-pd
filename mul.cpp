#include "polynomial.h"
#include <iostream>
#include <vector>
using namespace std;

polynomial mul(polynomial p4, polynomial p2)
{
    polynomial p1,p3;
int ax1,ax2,ax3,px1,px2,px3,s1,d,i;
for (int i=0;i<p4.ax.size();i++)
{
    ax3=p4.ax[i];
    px3=p4.px[i];
    for (int i=0;i<p2.ax.size();i++)
    {
        p1.ax.push_back(ax3*p2.ax[i]);
        p1.px.push_back(px3*p2.px[i]);
    }

}



s1=p1.ax.size();
d=s1;
for (int n=0;n<s1;n++)
{
    px1=p1.px[0];
    ax1=p1.ax[0];
    p1.ax.erase(p1.ax.begin());
    p1.px.erase(p1.px.begin());
    d-=1;
    i=0;
    while(i<d){
        if(p1.px[i]==px1)
        {

            ax1=p1.ax[i]+ax1;
            p1.px.erase(p1.px.begin()+i);
            p1.ax.erase(p1.ax.begin()+i);

            d=d-1;
            s1-=1;
          i=0;
        }
        else
            i+=1;

    }
    p3.ax.push_back(ax1);
    p3.px.push_back(px1);
}



return p3;
}
