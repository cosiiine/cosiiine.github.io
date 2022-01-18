#include<stdio.h>  
#include <stdlib.h>  
  
int cmp(const void *a, const void *b)  
{  
    return *(int *)a-*(int *)b;  
}  
  
int main()  
{  
    int n;  
    scanf("%d",&n);  
    while(n--)  
    {  
        int t,m,k,sum=0;  
        scanf("%d %d %d",&t,&m,&k);  
        int a[k];  
        for(int i=0;i<k;i++) scanf("%d",&a[i]);  
        qsort(a,k,sizeof(int),cmp);  
        for(int i=0;i<m;i++) sum+=a[i];  
        if(sum<=t) printf("%d\n",sum);  
        else printf("Impossible\n");  
    }  
    return 0;  
}
