#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int a[100000]; long total=0; for(int i=0;i<n;i++){ scanf("%d",&a[i]); total+=a[i]; }
    long left=0; for(int i=0;i<n;i++){ if(left==total-left-a[i]){ printf("%d\n",i); return 0; } left+=a[i]; } printf("-1\n");
return 0;
}