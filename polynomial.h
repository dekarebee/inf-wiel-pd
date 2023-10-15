#include <iostream>
#include <vector>
using namespace std;
struct polynomial
{
    vector <int> ax;
    vector <int> px;
};

int deg(polynomial p1);
polynomial add(polynomial p1, polynomial p2);
polynomial sub(polynomial p1, polynomial p2);
polynomial mul(polynomial p1, polynomial p2);
