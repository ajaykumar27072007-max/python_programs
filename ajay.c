#include<stdio.h>
int main()
{
    int a[7]={15,16,17,18,19,20,21};
    float avg, sum=0.0;
    for(int i=0;i<7;i++)
    {
        sum+=a[i];
    }
    avg=sum/7;
    printf("Average: %.2f", avg);
}