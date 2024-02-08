#include "draw.h"		/* for font */
#include "stdio.h"		/* for putchar */

void print_char_5x7(char c)
{
  c -= 0x20;
  for (char row = 0; row < 5; row++) {
    unsigned short rowBits = font_5x7[c][row];
    for (char col = 0; col < 7; col++) {
      unsigned short colMask = 1 << (6-col); /* mask to select bit associated with bit */
      putchar( (rowBits & colMask) ? '*' : ' ');
    }
    putchar('\n');
  }
}
