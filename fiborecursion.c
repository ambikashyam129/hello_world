#include<stdio.h>
void main()
{
int fib(int);
int i,r,n;
printf("Enter how many terms to be print\n");
scanf("%d",&n);
printf("Fibonacci series is:\n");
for(i=1;i<=n;i++)
{
r=fib(i);
printf("%5d",r);
}}
int fib(int x)
{
int f;
if(x==1)
return(0);
else if(x==2)
return(1);
else
f=fib(x-1)+fib(x-2);
return(f);
}
