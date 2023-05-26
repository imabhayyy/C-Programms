#include<stdio.h>
int main()
{
    int pr,time;
    float rate,si;
    printf("Enter the principal,rate,time");
    scanf("%d%d",&pr,&time);
    scanf("%f",&rate);
    si=(pr*rate*time)/100;
    printf("simple interest is %.2f",si);
return 0;
}
