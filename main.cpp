#include <iostream>
#include "polynomial.h"
#include <vector>
using namespace std;

int main()
{

int a,b,d,e,f;
cout<< "input the lenght of the first polynomial \n";
cin >> a;
cout<< "input the lenght of the second polynomial \n";
cin >> b;
double c;
polynomial p1,p2,p3,p4,p5;
e=0;
f=0;
    cout<< "input the data about the first polynomial in the following way: \ncoefficient of the first term \ndegree of the first term \ncoefficient of the second term \ndegree of the second term \nand so on until all terms have been completely inputted \n";
for (int i=0;i<a;i++)
{

    cin>>c>>d;

    if (d>e)
    {
        p1.ax.insert(p1.ax.begin(),c);
        p1.px.insert(p1.px.begin(),d);
        e=d;
    }
    else
    {
        p1.ax.push_back(c);
        p1.px.push_back(d);
    }
}
    cout<< "input the data about the second polynomial \n";
for (int i=0;i<b;i++)
{
    cin>>c>>d;
    if (d>f)
    {
        p2.ax.insert(p2.ax.begin(),c);
        p2.px.insert(p2.px.begin(),d);
        f=d;
    }
    else
    {
        if (d==f)
        {
        p2.ax.push_back(c);
        p2.px.push_back(d);
        f=d;
        }
        else
        {
        p2.ax.push_back(c);
        p2.px.push_back(d);
        }
    }
}
cout << "polynomial 1: ";
for (int i=0;i<p1.ax.size();i++)
{
    if (i!=0)
        {
            if(p1.ax[i]>=0)
            {


    cout <<"+"<< p1.ax[i]<<"x^"<<p1.px[i];
            }
            else
            {
               cout << p1.ax[i]<<"x^"<<p1.px[i];
            }
    }
    else
    {
        cout << p1.ax[i]<<"x^"<<p1.px[i];
    }
}
cout << " of which its degree is "<<deg(p1);
cout << "\n"<< "polynomial 2: ";
for (int i=0;i<p2.ax.size();i++)
{
    if (i!=0)
        {
            if(p2.ax[i]>=0)
            {


    cout <<"+"<< p2.ax[i]<<"x^"<<p2.px[i];
            }
            else
            {
               cout << p2.ax[i]<<"x^"<<p2.px[i];
            }
    }
    else
    {
        cout << p2.ax[i]<<"x^"<<p2.px[i];
    }
}
cout << " of which its degree is "<<deg(p2);
p3=add(p1,p2);
p4=sub(p1,p2);
p5=mul(p1,p2);

cout << "\n"<< "sum of polynomial 1 and polynomial 2: ";
for (int i=0;i<p3.px.size();i++)
{
    if (i!=0)
        {
            if(p3.ax[i]>=0)
            {
                cout <<"+"<< p3.ax[i]<<"x^"<<p3.px[i];
            }
            else
            {
               cout << p3.ax[i]<<"x^"<<p3.px[i];
            }
    }
    else
    {
        cout << p3.ax[i]<<"x^"<<p3.px[i];
    }
}
cout << " of which its degree is "<<deg(p3);
cout << "\n"<< "difference of polynomial 1 and polynomial 2: ";
for (int i=0;i<p4.px.size();i++)
{
    if (i!=0)
        {
            if(p4.ax[i]>=0)
            {
                cout <<"+"<< p4.ax[i]<<"x^"<<p4.px[i];
            }
            else
            {
               cout << p4.ax[i]<<"x^"<<p4.px[i];
            }
    }
    else
    {
        cout << p4.ax[i]<<"x^"<<p4.px[i];
    }
}
cout << " of which its degree is "<<deg(p4);
cout << "\n"<< "result of multiplying polynomial 1 and polynomial 2: ";
for (int i=0;i<p5.px.size();i++)
{
    if (i!=0)
        {
            if(p5.ax[i]>=0)
            {
                cout <<"+"<< p5.ax[i]<<"x^"<<p5.px[i];
            }
            else
            {
               cout << p5.ax[i]<<"x^"<<p5.px[i];
            }
    }
    else
    {
        cout << p5.ax[i]<<"x^"<<p5.px[i];
    }
}
cout << " of which its degree is "<<deg(p5);
    return 0;
}
