#include <stdio.h>  
  
int main(){  
    int a,b,c;  
  
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)  
    {  
        printf("Trapezoid area:%.1f\n",(a+b)*c/2.0);  
    }  
  
    return 0;  
}
