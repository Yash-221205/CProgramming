#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int *a=malloc(n*sizeof(int)); for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int maxv=0; for(int i=0;i<n;i++) if(a[i]>maxv) maxv=a[i]; int size = maxv+1; int *seen=calloc(size,sizeof(int));
    for(int i=0;i<n;i++){ if(seen[a[i]]){ printf("%d\n",a[i]); free(a); free(seen); return 0; } seen[a[i]]=1; }
    printf("-1\n"); free(a); free(seen); return 0;
}
