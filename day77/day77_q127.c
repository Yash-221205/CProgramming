#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    FILE *in=fopen("input.txt","r"); if(!in) return 0; FILE *out=fopen("output.txt","w"); if(!out){ fclose(in); return 0; }
    int ch; while((ch=fgetc(in))!=EOF){ if(ch>='a'&&ch<='z') fputc(ch-32,out); else fputc(ch,out); }
    fclose(in); fclose(out); return 0;
}
