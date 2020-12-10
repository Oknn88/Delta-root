#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, de, t, z;
    printf("(ax)*(ax)+bx+c=0 denklemindeki \na= "); scanf("%d",&a);
    printf("b= "); scanf("%d",&b);
    printf("c= "); scanf("%d",&c);
    de = b*b-4*a*c;
    t = (-b+sqrt(de))/2*a;
    z =  (-b-sqrt(de))/2*a;
    printf("Delta = %d\nKokler = %d , %d",de,t,z);
    return 0;
}
