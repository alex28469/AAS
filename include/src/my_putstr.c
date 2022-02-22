#include "../lib/my_lib.h"

void my_putstr(char* str) {

        int i = 0;

        while(str[i] != '\0'){
                my_putchar(str[i]);
                i++;
        }
        my_putchar('\n');
}
