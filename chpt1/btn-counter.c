#include <stdio.h>

int main(){
    int c,nb=0,nt=0,nn=0;
    while((c=getchar())!=EOF){
        if(c=='\n')nn++;
        else if(c=='\t')nt++;
        else if(c==' ')nb++;
    }
    printf("# of blank:%d, # of tabs:%d, # of new lines: %d\n",nb,nt,nn);
}