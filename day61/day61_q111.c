#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n,k; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]); scanf("%d",&k);
    int i=0,j=0; int first;
    for(i=0;i<=n-k;i++){
        int found=0;
        for(int t=i;t<i+k;t++) if(a[t]<0){ printf("%d",a[t]); found=1; break; }
        if(!found) printf("0");
        if(i<n-k) printf(" ");
    }
    printf("\n");
    free(a);
    return 0;
}
