#include <stdio.h>
#include "lists.h"
size_t print_list(const list_t *h) {
    size_t c = 0;
    const list_t *t = h;

    while (t != NULL) {
        if (t->str != NULL)
            printf("%s\n", t->str);
        else
            printf("[0] (nil)\n");

        c++;
        t = t->next;
    }

    return c;
}

