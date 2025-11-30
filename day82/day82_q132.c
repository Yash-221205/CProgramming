#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum Light{RED, YELLOW, GREEN}; int main(){ enum Light v=GREEN; if(v==RED) printf("Stop\n"); else if(v==YELLOW) printf("Wait\n"); else printf("Go\n"); return 0; }
