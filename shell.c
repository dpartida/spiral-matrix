//program to produce an array of numbers spiraling outward from center

#include "intvalidation.h"
#include<math.h>

int ** AllocateMatrix(int size) {
  int **matrix = malloc(size * sizeof(int *));
  for (int i = 0; i < size; i++) {
    matrix[i] = malloc(size * sizeof(int));
  }
  return matrix;
}

int * GetStartCoords(int n) {
  int *start = malloc(2 * sizeof(int));
  if (n%2 == 0) {
    start[0] = floor(n/2) - 1; //x coord
    start[1] = floor(n/2) - 1; //y coord
  }
  else {
    start[0] = floor(n/2);
    start[1] = floor(n/2);
  }
  return start;
}
    

int main (void) {
  //getmatrix size
  printf("Enter an integer for the square matrix size: \n");
  int n = GetUserInt();
  printf("\tDEBUG -- size = %d\n", n);
  
  //allocate matrix memory
  int **mat = AllocateMatrix(n);
  printf("\tDEBUG -- allocated square matrix memory for size %dx%d.\n", n, n);
  
  //allocate start-coord set array and get coords
  int *start = GetStartCoords(n);
  printf("\tDEBUG -- starting location: x coord = %d y coord = %d\n", start[0], start[1]);

  /*more code to produce the matrix values*/
  printf("Spiral matrix code isn't finished--skipping matrix.\n");

  //free used memory
  free(start);
  printf("\tDEBUG -- freed starting-coords-array memory\n");
  free(mat);
  printf("\tDEBUG -- freed matrix memory\n");
  return 0;
}
