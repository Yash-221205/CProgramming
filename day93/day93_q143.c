#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{ char name[100]; int roll; int marks; };
int main(){ struct Student s[3]; for(int i=0;i<3;i++) scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks); int idx=0; for(int i=1;i<3;i++) if(s[i].marks> s[idx].marks) idx=i; printf("Topper: %s (Marks: %d)\n", s[idx].name, s[idx].marks); return 0; }
