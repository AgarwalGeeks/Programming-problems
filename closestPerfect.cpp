#include<iostream>
#include<cmath>
using namespace std;
long long int closestSquare(long long int number)
{
    if(((int)sqrt(number)*(int)sqrt(number))==number)
        return number;
    else
    {
        for(int i=number-1;i>=1;i--)
        {
            if(((int)sqrt(i)*(int)sqrt(i))==i)
                return i;
        }
    }
}
int main()
{
	long long int a=24;
	cout<<closestSquare(a);
	
	
	
}
