#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char s[100005], t[100005]; if(!fgets(s,100005,stdin)) return 0; if(!fgets(t,100005,stdin)) return 0;
    int cs[26]={0}, ct[26]={0}; int i;
    for(i=0;s[i]&&s[i]!='\n';i++) if(s[i]>='a'&&s[i]<='z') cs[s[i]-'a']++;
    for(i=0;t[i]&&t[i]!='\n';i++) if(t[i]>='a'&&t[i]<='z') ct[t[i]-'a']++;
    int ok=1; for(i=0;i<26;i++) if(cs[i]!=ct[i]) ok=0;
    printf(ok? "Anagram\n":"Not Anagram\n"); return 0;
}
