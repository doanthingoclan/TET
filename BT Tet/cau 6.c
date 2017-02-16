#include <stdio.h>
void main()
{
int i,n,dem;
dem=0;
printf("nhap n:= ");
scanf("%d",&n);
for(i=2;i<n/1.7;i++)
{
if((n%i)==0)
dem++;
}
if (dem<=0) printf("so nguyen to");
    else printf("khong phai so nguyen to ");
}
