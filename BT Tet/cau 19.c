#include <stdio.h>
void main()
{
int i,n;
float tong;
printf("nhap n:=");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
    tong +=(1/(float)(i));

 }
printf("tong cua n so dau tien cua day so la : =%.3f",tong);
}
