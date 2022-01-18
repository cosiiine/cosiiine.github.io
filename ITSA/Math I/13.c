#include <stdio.h>  
  
int main()  
{  
    int x, y, a, b;  
    while(scanf("%d %d %d %d",&x,&y,&a,&b)!=EOF)  
    {  
        int t=60*(a-x)+(b-y);  
        if(t<0) t=24*60+t;  
  
        if(t<120) printf("%d\n",t/30*30);  
        else  
        {  
            int sum=120;  
            t-=120;  
            if(t<120) printf("%d\n",sum+t/30*40);  
            else  
            {  
                sum+=160;  
                t-=120;  
                printf("%d\n",sum+t/30*60);  
            }  
        }  
    }  
  
    return 0;  
}
