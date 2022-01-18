#include<stdio.h>  
#include <string.h>  
  
int main()  
{  
    int n;  
    scanf("%d",&n);  
    while(n--)  
    {  
        int a,fail=0,h=0,sum=0;  
        for(int i=0;i<3;i++)  
        {  
            scanf("%d",&a);  
            if(a<60) fail+=1;  
            else if(a>=80) h=1;  
            sum+=a;  
        }  
        if(fail==0) printf("P\n");  
        else if(fail==1&&sum>=220) printf("P\n");  
        else if(fail==1) printf("M\n");  
        else if(fail==2&&h==1) printf("M\n");  
        else printf("F\n");  
    }  
  
    return 0;  
}
