#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    for (col = 0; col < minCol; col++) putchar(' ');
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}


void print_arrow(int triangleLCol, int trianglesize) {

  //print triangle

  for (int row = 0; row <= trianglesize; row++) {

    int minCol = triangleLCol + trianglesize - row;

    int maxCol = triangleLCol + trianglesize + row;

    int col;

    for (col = 0; col < minCol; col++)

      putchar(' ');

    for (; col <= maxCol; col++)

      putchar('*');

    putchar('\n');

  }
  // print square

  int squareLcol = triangleLCol + (trianglesize / 2) + 1;
  int squaresize = trianglesize;
  for (int row = 0; row < squaresize; row++) {

    int col;

    for (col = 0; col < squareLcol; col++)

      putchar(' ');

    for (; col < squareLcol + squaresize; col++)

      putchar('*');

    putchar('\n');

  }
}
