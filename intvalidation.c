//functions for integer-validation library

#include "intvalidation.h"
#define MAXBUF 1000

void CheckNoInput(char *);
void CheckStr(char *);

/*prompt user for an integer.
 *repeat prompt for invalid input*/
int GetUserInt(void) {
  char *str = malloc(MAXBUF * sizeof(char));
  printf("\tDEBUG (intvalidation.c)-- allocated memory for string.\n");
  fgets(str, MAXBUF, stdin);
  CheckNoInput(str); //check for empty input
  CheckStr(str); //check for non-digit characters
  int num = atoi(str); //convert valid input string to integer type
  
  free(str); //free input string (This line creates a "double free" error when the user takes multiple attempts to give valid input)
  printf("\tDEBUG (intvalidation.c)-- freed input string memory.\n");
  return num;
}


void CheckNoInput(char *str) {
  if (str[0] == '\n') {
    fprintf(stderr, "[Error] no input detected. Please enter an integer: \n");
    free(str);
    printf("\tDEBUG (intvalidation.c)-- freed string memory.\n");
    GetUserInt(); //repeat prompt
  }
}


void CheckStr(char *str) {
  char c;
  int i = 0;
  while (str[i] != '\n') {
    c = str[i];
    if (isdigit(c) == 0) {
      fprintf(stderr, "[Error] that is not an integer. Please enter an integer: \n");
      free(str);
      printf("\tDEBUG (intvalidation.c)-- freed string memory.\n");
      GetUserInt(); //repeat prompt
      return;
    }
    i++;
  }
}
    
