#include <stdio.h>  
  
int main(){  
    int a,b;  
  
    while(scanf("%d %d",&a,&b)!=EOF)  
    {  
        printf("%.1f\n",a*b/2.0);  
    }  
  
    return 0;  
}
