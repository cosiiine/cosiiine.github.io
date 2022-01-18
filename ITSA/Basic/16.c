#include<stdio.h>  
#include <string.h>  
  
int main()  
{  
    char s[515], c[130];  
  
    while(scanf("%s %s",c,s)!=EOF)  
    {  
        int ls=strlen(s), lc=strlen(c);  
        int ans=0;  
        for(int i=0;i<ls-lc+1;i++)  
        {  
            if(!strncmp(s+i,c,lc)) ans++;  
        }  
        printf("%d\n",ans);  
    }  
} 
