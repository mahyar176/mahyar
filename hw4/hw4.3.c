#include <stdio.h>
#define is ==
#define and &&
#define mod %
#define GET(n) scanf("%d",&n)

int main() {
    int n;
    GET(n);
    if(n mod 2 is 0 and n mod 5 is 0)
        printf("OK");
    else
        printf("Not OK");
}
