#include<stdio.h>
#include<math.h>
void main()
{
float i,n,S=0,D=0;
    printf("nhap n=");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        D=D+i;
        S=S+(pow(-1,i))/(D);

    }
    printf("S= %f",S);
}
