#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int number;
    char title[10];
};

void main(void) {
    struct Book *p = NULL;

    // 구조체 동적 메모리 할당
    p = (struct Book *)malloc(sizeof(struct Book));
    if (p == NULL) {
        printf("구조체 메모리 할당 오류!\n");
        exit(1);
    }

    p->number = 1;
    strcpy(p->title, "C Prog");  // 10byte 제약 → 짧게

    printf("Book 번호 : %d\n", p->number);
    printf("Book 제목 : %s\n", p->title);

    free(p);
}

