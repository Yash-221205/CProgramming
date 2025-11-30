#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char s[10005]; if(!fgets(s,10005,stdin)) return 0; int i=0;
    while(s[i]){ while(s[i]==' '||s[i]=='\t' ){ putchar(s[i]); i++; } if(s[i]==0||s[i]=='\n') break; if(s[i]>='a'&&s[i]<='z'){ putchar(s[i]-32); } else putchar(s[i]); i++;
    while(s[i] && s[i]!=' ' && s[i]!='\t' && s[i]!='\n'){ if(s[i]>='A'&&s[i]<='Z') putchar(s[i]+32); else putchar(s[i]); i++; } }
    return 0;
}
