#include <stdio.h>

int main(){
    int c;
    c = getchar();
    while(c!=EOF){
        printf("EOF:%d\n",EOF);
        putchar(c);
        c = getchar();
    }
    return 0;
}