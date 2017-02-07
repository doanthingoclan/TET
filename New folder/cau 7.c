#include <stdio.h>
void main()
{
int i,n,gt;
gt=1;
printf("nhap so :=");
scanf("%d",&n);
for(i=2;i<=n;i++)
{

gt=gt*i;
}
printf("giai thua cua %d!:=%d",n,gt);

}
