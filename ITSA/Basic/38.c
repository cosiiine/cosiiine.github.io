#include<stdio.h>  
#include <string.h>  
  
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF)  
    {  
        float a=0,b=0;  
  
        if(n<=120)  
        {  
            printf("Summer months:%.2f\n",n*2.10);  
            printf("Non-Summer months:%.2f\n",n*2.10);  
        }  
        a=120*2.1;  
        b=120*2.1;  
        if(n<=330&&n>120)  
        {  
            printf("Summer months:%.2f\n",a+(n-120)*3.02);  
            printf("Non-Summer months:%.2f\n",b+(n-120)*2.68);  
        }  
        a+=210*3.02;  
        b+=210*2.68;  
        if(n<=500&&n>330)  
        {  
            printf("Summer months:%.2f\n",a+(n-330)*4.39);  
            printf("Non-Summer months:%.2f\n",b+(n-330)*3.61);  
        }  
        a+=170*4.39;  
        b+=170*3.61;  
        if(n<=700&&n>500)  
        {  
            printf("Summer months:%.2f\n",a+(n-500)*4.97);  
            printf("Non-Summer months:%.2f\n",b+(n-500)*4.01);  
        }  
        a+=200*4.97;  
        b+=200*4.01;  
        if(n>700)  
        {  
            printf("Summer months:%.2f\n",a+(n-700)*5.63);  
            printf("Non-Summer months:%.2f\n",b+(n-700)*4.50);  
        }  
    }  
  
    return 0;  
}
