#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    long n; if(scanf("%ld",&n)!=1) return 0; long s = n*(n+1)/2; long found=-1; for(long i=1;i<=n;i++){ long left = i*(i+1)/2; long right = (n*(n+1)/2) - ((i-1)*i/2); if(left==right){ found=i; break; } } if(found==-1) printf("-1\n"); else printf("%ld\n",found);
return 0;
}