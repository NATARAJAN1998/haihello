#include <stdio.h>
int main()
{
 int a, b,c;
 a=b=c=6;
 a=a*b;
 b=b+c;
 c=a+b+c;
 printf("%d%d%d",c,b,a);
 return 0;
}

