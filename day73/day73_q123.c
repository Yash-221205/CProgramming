#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char fname[200]; if(!fgets(fname,200,stdin)) return 0; if(fname[strlen(fname)-1]=='\n') fname[strlen(fname)-1]=0;
    FILE *f=fopen(fname,"r"); if(!f){ printf("Characters: 0\nWords: 0\nLines: 0\n"); return 0; }
    int ch; long chars=0, words=0, lines=0; int inword=0;
    while((ch=fgetc(f))!=EOF){ chars++; if(ch=='\n') lines++; if(ch==' '||ch=='\n'||ch=='\t'){ if(inword){ words++; inword=0; } } else inword=1; }
    if(inword) words++;
    printf("Characters: %ld\nWords: %ld\nLines: %ld\n", chars, words, lines); fclose(f); return 0;
}
