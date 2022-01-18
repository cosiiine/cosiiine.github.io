#include<stdio.h>  
#include <string.h>  
  
int main()  
{  
    char c[2];  
    while(scanf("%s",c)!=EOF)  
    {  
        int ans=0;  
        if(c[0]=='X') ans+=(10*10);  
        else ans+=((c[0]-'0')*10);  
        for(int i=1;i<10;i++)  
        {  
            scanf("%s",c);  
            if(c[0]=='X') ans+=(10*(10-i));  
            else ans+=((c[0]-'0')*(10-i));  
        }  
  
        if(ans%11) printf("NO\n");  
        else printf("YES\n");  
    }  
  
    return 0;  
}
