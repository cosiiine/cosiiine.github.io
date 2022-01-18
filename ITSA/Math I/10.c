#include <stdio.h>  
  
int main(){  
    float a;  
  
    while(scanf("%f",&a)!=EOF)  
    {  
        printf("%.1f\n",a*9/5+32);  
    }  
  
    return 0;  
}
