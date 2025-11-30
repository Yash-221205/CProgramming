#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n,k; if(scanf("%d %d",&n,&k)!=2) return 0; int a[100000]; for(int i=0;i<n;i++) scanf("%d",&a[i]); long sum=0; for(int i=0;i<k;i++) sum+=a[i]; long best=sum; for(int i=k;i<n;i++){ sum+=a[i]-a[i-k]; if(sum>best) best=sum; } printf("%ld\n",best);
return 0;
}