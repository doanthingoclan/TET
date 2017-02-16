#include <stdio.h>
void main()
{
int i;
printf("nhap so :=");
scanf("%d",&i);
if ((int)sqrt(i)*(int)sqrt(i)==i)
printf("\n%d la so chinh phuong",i);
else printf("\n%d khong phai la so chinh phuong",i);
}
