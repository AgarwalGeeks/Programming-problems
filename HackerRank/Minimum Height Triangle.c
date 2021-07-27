#include <stdio.h>
#include <stdbool.h>

int main()
{
    int b,a;
    scanf("%d%d",&b,&a);
    printf("%d",2 * a / b + ((2 * a % b==0) ? 0: 1) );
    return 0;
}

/* 
		If you want to add 1 or 0 after an expression computationaly than put the condition into ternary operator
		as in this problem
		
*/
