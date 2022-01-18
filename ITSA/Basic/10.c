#include <stdio.h>  
  
int main()  
{  
    int n,m;  
    while(scanf("%d%d",&n,&m)!=EOF)  
    {  
        int t=1;  
        while(t)  
        {  
            t=n%m;  
            n=m;  
            m=t;  
        }  
        printf("%d\n",n);  
    }  
  
    return 0;  
} 
