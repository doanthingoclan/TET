#include <stdio.h>
void main()
{
float a,b,c,x1,x2,delta;
printf("nhap 3 so a,b,c");
scanf("%f%f%f",&a,&b,&c);
if(a==0,c<0)
printf("nghiem cua phuong trinh trung phuong bac 4 la : x1=%.3f\nx2=%.3f",
sqrt(-c/b),-sqrt(-c/b));
else if(a=0,c>0)
printf("phuong trinh vo nghiem");
if(a!=0)
{
delta=b*b-4*a*c;
    x1=-b+sqrt(delta)/2*a;
    x2=-b-sqrt(delta)/2*a;
    if(delta<0) printf("\nPhuong Trinh vo nghiem.");
    else if(delta==0) printf("\nPhuong trinh co 2 nghiem  x1=%f\tx2=%.3f",-b/2*a,b/2*a);
    else if(delta>=0) printf("\nPhuong trinh co 4 nghiem x1=%.3f , x2=%.3f , x3=%.3f ,x4=%.3f",x1,-x1,x2,-x2);

}
}
