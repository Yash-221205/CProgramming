#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Data{ int a; char name[50]; };
int main(){ struct Data x,y; scanf("%d %s",&x.a,x.name); scanf("%d %s",&y.a,y.name); if(x.a==y.a && strcmp(x.name,y.name)==0) printf("Identical\n"); else printf("Not Identical\n"); return 0; }
