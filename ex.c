#include<stdio.h>
void main()
{
    int m,n;
    int CMMDC;
    printf("Introdu m si n = ");
    scanf("%d%d", &m, &n);
    while (m!=n)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;

    printf("CMMDC= %d ",m);
}
}
