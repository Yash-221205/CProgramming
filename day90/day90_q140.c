#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Gender{MALE,FEMALE,OTHER}; struct Person{ char name[100]; enum Gender g; };
int main(){ struct Person p; strcpy(p.name,"John"); p.g=MALE; if(p.g==MALE) printf("Male\n"); else if(p.g==FEMALE) printf("Female\n"); else printf("Other\n"); return 0; }
