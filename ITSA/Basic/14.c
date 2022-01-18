#include <stdio.h>  
#include <string.h>  
  
int main()  
{  
    char n[10];  
    while(scanf("%s",n)!=EOF)  
    {  
        int l=strlen(n),p=0;  
        for(int i=0;i<(l+1)/2;i++)  
        {  
            if(n[i]!=n[l-1-i])  
            {  
                p=1;  
                break;  
            }  
        }  
        if(p) printf("NO\n");  
        else printf("YES\n");  
    }  
  
    return 0;  
} 
