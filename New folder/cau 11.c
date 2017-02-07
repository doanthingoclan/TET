#include <stdio.h>
void main()
{
int i,n,j,k,a[50],temp1,temp2;
printf("nhap phan tu cua mang");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nNhap gia tri cua phan tu a[%d]:=",i);
scanf("%d",&a[i]);
}
printf("nhap gia tri phan tu can chen:");
scanf("%d",&j);
printf("nhap vi tri gia tri phan tu can chen:");
scanf("%d",&k);
for (i=n;i>=k;i--)
{
        a[i]=a[i-1];

a[k-1]=j;
}

     printf("\nDay sau khi chen:");
    for(i=0;i<n+1;i++)
    {
        printf("%d ",a[i]);
    }
}
