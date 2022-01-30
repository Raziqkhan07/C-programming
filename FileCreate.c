#include <stdio.h>

int main(void) {
  // creating a FILE variable
  FILE *fptr;

  // creating a variable to store filename
  char filename[255];

  // get file path from the user
  printf("Enter the filename: ");
  scanf("%s", filename);

  // open the file in write mode
  fptr = fopen(filename, "w");

  if (fptr != NULL) {
    printf("File created successfully!\n");

    // close the file
    fclose(fptr);
  }
  else {
    printf("Failed to create the file.\n");
  }

  return 0;
}
