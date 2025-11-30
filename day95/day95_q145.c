#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{ char name[100]; int roll; int marks; };
struct Student topStudent(struct Student arr[], int n){ int idx=0; for(int i=1;i<n;i++) if(arr[i].marks>arr[idx].marks) idx=i; return arr[idx]; }
int main(){ int n=3; struct Student s[3]; for(int i=0;i<n;i++) scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks); struct Student t=topStudent(s,n); printf("Top Student: %s | Roll: %d | Marks: %d\n", t.name, t.roll, t.marks); return 0; }
