#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Days{SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY};
int main(){ for(int i=0;i<=6;i++){ const char *names[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"}; printf("%s = %d\n", names[i], i); } return 0; }
