#include<iostream>
using namespace std;

int a (int m)
{return ++m;}
int b(int&m)
{return ++m;}
int c(char &m)
{return ++m;} 

int main ()
{
      int p = 0, q = 0, r = 0; 
      p += a(b(p));
      q += b(a(q));
      r += a(c(r));
      cout<<p<<q<<r;
  }
