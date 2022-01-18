#include <stdio.h>  
  
int main(){  
    int a;  
  
    while(scanf("%d",&a)!=EOF)  
    {  
        int d=0,h=0,m=0,s=a%60;  
        a/=60;  
        m=a%60;  
        a/=60;  
        h=a%24;  
        a/=24;  
        d=a;  
        printf("%d days\n",d);  
        printf("%d hours\n",h);  
        printf("%d minutes\n",m);  
        printf("%d seconds\n",s);  
    }  
  
    return 0;  
}
