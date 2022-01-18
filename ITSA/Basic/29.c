#include <stdio.h>  
  
int main()  
{  
    char a[15];  
    while(scanf("%s",a)!=EOF)  
    {  
        int x;  
        if(a[0]<'I') x = a[0]-'A'+10;  
        else if(a[0]=='I') x = 34;  
        else if(a[0]<'O') x = a[0]-'J'+18;  
        else if(a[0]=='O') x = 35;  
        else if(a[0]<'W') x = a[0]-'P'+23;  
        else if(a[0]=='W') x = 32;  
        else x = a[0]-'X'+30;  
  
        int x1 = x/10, x2 = x%10;  
        int sum = x1 + 9*x2 + (a[9]-'0');  
        for(int i=1;i<9;i++)  
        {  
            sum+=(a[i]-'0')*(9-i);  
        }  
        if(sum%10) printf("WRONG!!!\n");  
        else printf("CORRECT!!!\n");  
    }  
    return 0;  
}
