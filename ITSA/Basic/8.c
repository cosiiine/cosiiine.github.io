#include <stdio.h>  
  
int main()  
{  
    int n;  
    while(scanf("%d",&n)!=EOF)  
    {  
        int x=0;  
        for(int i=2;i*i<=n;i++)  
        {  
            if(n%i==0)  
            {  
                x=1;  
                break;  
            }  
        }  
        if(x) printf("NO\n");  
        else printf("YES\n");  
    }  
  
    return 0;  
}
