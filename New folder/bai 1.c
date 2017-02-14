#include <stdio.h>
void main()
{
    int a,b,c;
    printf("nhap so :=");
    scanf("%d%d%d",&a,&b,&c);


if(a>b&&a>c)
    printf("%d la so lon nhat ",a);
else
if(b>a&&b>c)
    printf("%d la so lon nhat", b);
else
if(c>a&&c>a)
    printf("%d la so lon nhat", c);
    }
