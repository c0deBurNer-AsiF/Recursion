#include<stdio.h>
int count(int);
int main()
{
    int x;
    printf("enter a number:\n");
    scanf("%d",&x);
    int k;
    k=count(x);
    printf("Entered number is -> %d digit ",k);
}
int i=0;
int count(int n)
{

    if(n<10)
        return i++;

   i++;
   count(n/10);
   return i;
}
