#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    if (scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d) == 5) {
        printf("%d\n", i);
        printf("%ld\n", l);
        printf("%c\n", c);
        printf("%.3f\n", f);
        printf("%.9f\n", d);
    }

    return 0;
}
