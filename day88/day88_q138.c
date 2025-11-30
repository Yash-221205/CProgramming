#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Light{RED,YELLOW,GREEN}; int main(){ const char *names[]={"RED","YELLOW","GREEN"}; for(int i=0;i<3;i++) printf("%s=%d\n", names[i], i); return 0; }
