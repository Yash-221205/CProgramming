#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int a[100000]; for(int i=0;i<n;i++) scanf("%d",&a[i]); long *res = malloc(n*sizeof(long)); long prod=1; for(int i=0;i<n;i++){ res[i]=prod; prod*=a[i]; }
    long r=1; for(int i=n-1;i>=0;i--){ res[i]=res[i]*r; r*=a[i]; }
    for(int i=0;i<n;i++){ printf("%ld",res[i]); if(i<n-1) printf(" "); }
return 0;
}