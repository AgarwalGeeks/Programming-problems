#include<iostream>
#include<cmath>
using namespace std;
bool isPerfect(int number)
{
    int square_root=sqrt(number);
    return (square_root*square_root==number);
    
}
int main()
{
	//cout<<isPerfect(60);
	cout<<floor(sqrt(80));
	
	
}
