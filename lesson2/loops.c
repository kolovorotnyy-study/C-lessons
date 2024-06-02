#include <stdio.h>

void ClearBuffer(FILE* f) {
    int c;
    while ((c = fgetc(f)) != '\n' && c != EOF) {
    }
}

int main(void) {
    // while (condition) {
    //     // your code
    // }

    int a = 26;

    while (a % 13 != 0) {
        a--;  // <=> --a <=> a = a - 1
    }

    printf("%d\n", a);

    // for (iter_declarion; break_condition; after_loop) {
    //     // your code
    // }

    for (int i = 0; i < 10; ++i) {  // <=> i++ <=> i = i + 1
        printf("%d ", i);
    }
    putchar('\n');

    for (int i = 0; i < 15; i += 2) {
        printf("%d ", i);
    }
    putchar('\n');

    int p1;
    int p2;

    int err = 0;

    do {
        err = scanf("%d %d", &p1, &p2) != 2;

        if (err) {
            printf("Invalid input. Try again\n");
            ClearBuffer(stdin);
        }
    } while (err);

    // do {
    //     // your code
    // } while (condition);
}