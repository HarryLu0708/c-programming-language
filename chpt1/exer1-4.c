#include <stdio.h>

float convert(int c){
    return c*(9.0/5.0)+32.0;
}

int main(){
    int lower = 0;
    int upper = 300;
    int step = 20;
    float celsius, fahr;
    celsius = lower;
    while(celsius<=300){
        fahr = convert(celsius);
        printf("%3.0f\t%3.0f\n",celsius,fahr);
        celsius += step;
    }
    return 0;
}

/*
%d - print as decimal int
%6d - print as decimal int, at least 6 chars wide
%f - print as float point
%6f - print as floating point, at least 6 chars wide
%.2f - print as floating point, 2 chars after floating point
%6.2f - print as floating point, at least 6 wide and 2 after decimal point
*/