#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n; if(scanf("%d",&n)!=1) return 0; int a[100000]; for(int i=0;i<n;i++) scanf("%d",&a[i]); int x; scanf("%d",&x);
    int l=0,r=n-1,ans=-1; while(l<=r){ int mid=(l+r)/2; if(a[mid]>=x){ ans=mid; r=mid-1; } else l=mid+1; }
    if(ans==-1) printf("-1\n"); else printf("%d\n",ans);
return 0;
}