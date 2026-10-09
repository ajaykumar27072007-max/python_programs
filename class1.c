#include<stdio.h>
int main()
{
    int a[5]={15,16,17,18,19};
    float avg, sum=0.0;
    for(int i=0;i<5;i++)
    {
        sum+=a[i];
    }
    avg=sum/5;
    printf("Average: %.2f", avg);
}             