#include <stdio.h>

int main()
{
    int T,p1,p2,q1,q2;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d%d%d%d",&p1,&p2,&q1,&q2);
        printf("%d %d\n",q1+q1-p1,q2+q2-p2);
    }
    return 0;
}
