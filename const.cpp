#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	 const int p=10;
	 const int a=20;
	 const int  * ptr = &a; // pointer to constant
	 int  * const ptr = &a;  // constant pointer 
	const int  * const ptr = &a; // constant pointer to constant 
	*ptr=1000;
	cout<<*ptr;
	
	
	
	
	
	
	
	
	
	
	
	
	
}
