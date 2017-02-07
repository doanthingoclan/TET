#include <stdio.h>
void main()
{
float a,b,c,deta;
printf("nhap a,b,c");
scanf("%f%f%f",&a,&b,&c);
if(a==0)
printf("nghiem cua phuong trinh bac 2 la : %.3f",(-c/b));
else if(a!=0)
{
deta=b*b-4*a*c;
if(deta<0) printf("\nPhuong Trinh vo nghiem.");
else if(deta==0) printf("\nPhuong trinh co mot nghiem kep x1=x2=%.3f",-b/2*a);
else if(deta>=0) printf("\nPhuong trinh co hai nghiem x1=%.3f , x2=%.3f",-b+sqrt(deta)/2*a,-b-sqrt(deta)/2*a);
}
}
