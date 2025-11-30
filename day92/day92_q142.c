#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student{ char name[100]; int roll; int marks; };
int main(){ struct Student arr[5]; for(int i=0;i<5;i++) scanf("%s %d %d", arr[i].name, &arr[i].roll, &arr[i].marks); for(int i=0;i<5;i++) printf("Name: %s | Roll: %d | Marks: %d\n", arr[i].name, arr[i].roll, arr[i].marks); return 0; }
