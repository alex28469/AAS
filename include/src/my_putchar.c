#include <unistd.h>
#include "../lib/my_lib.h"

void my_putchar(char c)
{
  write(1, &c, 1);
}
