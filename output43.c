#include<stdio.h>
int main()
{
int a,b,i;
char c,d;
scanf("%c%c",&c,&d);
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{
printf("%c",c);
}
for(i=0;i<b;i++)
{
printf("%d",d);
}
return 0;
}
