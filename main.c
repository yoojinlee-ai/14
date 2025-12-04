#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int number;
    char title[10];
};

void main(void) {
    int i;
    struct Book **bookshelf;   
    
    bookshelf = (struct Book **)malloc(10 * sizeof(struct Book *));
    if (bookshelf == NULL) {
        printf("구조체 포인터 배열 동적 할당 오류!\n");
        exit(1);
    }

  
    for (i = 0; i < 10; i++) {
        bookshelf[i] = (struct Book *)malloc(sizeof(struct Book));
        if (bookshelf[i] == NULL) {
            printf("구조체 동적 할당 오류!\n");
            exit(1);
        }
    }

    
    bookshelf[0]->number = 5;
    strcpy(bookshelf[0]->title, "C Prog");

    bookshelf[1]->number = 3;
    strcpy(bookshelf[1]->title, "CommTh");  

   
    printf("%d : %s\n", bookshelf[0]->number, bookshelf[0]->title);
    printf("%d : %s\n", bookshelf[1]->number, bookshelf[1]->title);


    for (i = 0; i < 10; i++) {
        free(bookshelf[i]);
    }
    free(bookshelf);

    return;
}

