#include<stdio.h>
int fun(int n);

int main()
{
    // ptr is a pointer to function fun()
    int (*ptr)(int ) = fun;

    // fun() called using pointer 
    (*ptr)(3);
    return 0;
}

int fun(int n)
{
  for(;n > 0; n--)
    printf("GeeksQuiz ");
}
