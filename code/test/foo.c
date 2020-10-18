#include <stdio.h>
#include <stdlib.h>

void foo(int n) {
    int i, *p;

    p = (int *) malloc(n * sizeof(int));
    if (p == NULL) {
        perror("malloc");
        exit(0);
    }
    for (i = 0; i < n; i++) {
        p[i] = i * i;
    }

    for (i = 0; i < n; i++) {
        printf("i=%d\n", p[i]);
    }
    free(p);
}

int main() {
    foo(100);
    return 0;
}
