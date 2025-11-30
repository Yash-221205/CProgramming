#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]);
    long total = (long)n*(n+1)/2; long s=0; for(int i=0;i<n;i++) s+=a[i]; printf("%ld\n", total - s); free(a); return 0;
}
