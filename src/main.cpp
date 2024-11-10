#include <stdio.h>
#define SquareOf(x) x*x //macro-call leads to simple string replacements prior to actual compilation

//#define name(dummy1[,dummy2][,...]) tokenstring

//a macro is a scripted directive for the compiler (rather than a scripted piece of run-time code
//and therefore it gets handled and done with at compilation time rather than at run time.

#define SquareOf(x) x*x
int main() {
    int xin=3;
    printf("\nxin=%i",xin);
    printf("\nSquareOf(xin)=%i",SquareOf(xin));
    printf("\nSquareOf(xin+4)=%i",SquareOf(xin+4));
    printf("\nSquareOf(xin+xin)=%i",SquareOf(xin+xin));

    /*
    xin=3
    SquareOf(xin)=9
    SquareOf(xin+4)=19
    SquareOf(xin+xin)=15

    */
}