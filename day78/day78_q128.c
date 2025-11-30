#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char fname[200]; if(!fgets(fname,200,stdin)) return 0; if(fname[strlen(fname)-1]=='\n') fname[strlen(fname)-1]=0;
    FILE *f=fopen(fname,"r"); if(!f) return 0; int ch; int v=0,c=0;
    while((ch=fgetc(f))!=EOF){ if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){ char lo=ch|32; if(lo=='a'||lo=='e'||lo=='i'||lo=='o'||lo=='u') v++; else c++; } }
    printf("Vowels: %d\nConsonants: %d\n", v, c); fclose(f); return 0;
}
