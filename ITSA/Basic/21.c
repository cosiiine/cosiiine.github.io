#include<stdio.h>  
#include <string.h>  
  
int main()  
{  
    float a;  
    scanf("%f",&a);  
    float max=a, min=a;  
    for(int i=0;i<9;i++)  
    {  
        scanf("%f",&a);  
        if(a>max)max=a;  
        else if(a<min) min=a;  
    }  
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);  
}
