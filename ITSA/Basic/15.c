#include<stdio.h>  
  
int main()  
{  
    char s[100];  
    while(fgets(s,100,stdin))  
    {  
        int a[26]={0};  
        int ans=0;  
        for(int i=0;s[i]!='\0';i++)  
        {  
            if(s[i]==' ') ans++;  
            else if(s[i]>='a'&&s[i]<='z')  
            {  
                a[s[i]-'a']++;  
            }  
            else if(s[i]>='A'&&s[i]<='Z')  
            {  
                a[s[i]-'A']++;  
            }  
        }  
        printf("%d\n",ans+1);  
        for(int i=0;i<26;i++)  
        {  
            if(a[i])  
            {  
                printf("%c : %d\n",i+'a',a[i]);  
            }  
        }  
    }  
}
