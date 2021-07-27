#include<iostream>
using namespace std;
 
int &fun()
{
    static int x = 10;
    return x;
}
int main()
{
    fun() = 30;
    cout << fun();
    return 0;
}
/*
When a function returns by reference, 
it can be used as lvalue. Since x is a static variable,
it is shared among function calls and the initialization line "static int x = 10;" is executed only once.
The function call fun() = 30, modifies x to 30. 
The next call "cout << fun()" returns the modified value.
*/
