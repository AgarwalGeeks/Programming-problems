#include "iostream"
using namespace std;
int fun()
{
int x = 2, y = 5;
if(x < y) return (x = x + y);
else printf ("z1");
printf("z2");
}
int main ()
{
cout<<fun();
}
