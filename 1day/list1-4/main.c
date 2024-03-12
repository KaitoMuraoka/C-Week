#include <stdio.h>

int main()
{
    printf("ABC");
    /**print("DEF\n"); **/
    /*
    OUT: 
main.c:6:5: error: call to undeclared function 'print'; ISO C99 and later do not support implicit function declarations [-Wimplicit-function-declaration]
    print("DEF\n");
    ^
main.c:6:5: note: did you mean 'printf'?
/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/stdio.h:167:6: note: 'printf' declared here
int      printf(const char * __restrict, ...) __printflike(1, 2);
         ^
1 error generated.
    */

   printf("DEF\n"); // TRUE!
}
