#include<iostream>
using namespace std;
int ascii(string s)
{
    int n=s.length(),sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+s[i];
    }
    return sum;
}

int main()
{
	cout<<ascii("ah");
}
