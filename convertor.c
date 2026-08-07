#include<stdio.h>
int main()
{
    int n,base=1,binary=0,rem;

printf("enter the decimal number:");
scanf("%d",&n);
while(n>0)
{
n=n/2;
rem=n%2;
binary=binary+rem*base;
base=base*10;

}
printf("print binary number:%d\n",binary);
    return 1;
}