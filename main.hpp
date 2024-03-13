#include <iostream>
using namespace std;

void swapValues(int &, int &);
void swapValues(int &, int &, int &);
void swapValues(int &, int &, int &, int &);

void swapValues(int &n1, int &n2)
{
    int p;
    p = n1;
    n1 = n2;
    n2 = p;
}

void swapValues(int &n1, int &n2, int &n3)
{
    int p, q;
    p = n1;
    q = n2;
    n1 = n3;
    n2 = p;
    n3 = q;
}

void swapValues(int &n1, int &n2, int &n3, int &n4)
{
    int q, r, s, t;
    q = n1;
    r = n2;
    s = n3;
    t = n4;
    n1 = t;
    n2 = s;
    n3 = r;
    n4 = q;
}