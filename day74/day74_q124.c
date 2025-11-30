#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    char src[200], dst[200]; if(!fgets(src,200,stdin)) return 0; if(!fgets(dst,200,stdin)) return 0;
    if(src[strlen(src)-1]=='\n') src[strlen(src)-1]=0; if(dst[strlen(dst)-1]=='\n') dst[strlen(dst)-1]=0;
    FILE *fs=fopen(src,"r"); if(!fs) return 0; FILE *fd=fopen(dst,"w"); if(!fd){ fclose(fs); return 0; }
    int ch; while((ch=fgetc(fs))!=EOF) fputc(ch,fd);
    fclose(fs); fclose(fd); printf("File copied successfully to %s\n", dst); return 0;
}
