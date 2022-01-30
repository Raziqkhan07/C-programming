//#include <stdio.h>
//
//int main(void) {
//  // creating a FILE variable
//  FILE *fptr;
//
//  // creating a character variable
//  char ch;
//
//  // open the file in write mode
//  fptr = fopen("username1.txt", "w");
//
//  // take user input
//  printf("Enter your name: ");
//
//  // keep reading the user input from the terminal
//  // till Return (Enter) key is pressed
//  while( (ch = getchar()) != '\n' ) {
//
//    // write character ch in file
//    putc(ch, fptr);
//
//  }
//
//  // close the file
//  fclose(fptr);
//
//  // open the file in read mode
//  fopen("username.txt", "r");
//
//  // display the content of the file
//  printf("\nFile content:\n");
//  while( (ch = getc(fptr)) != EOF ) {
//    printf("%c", ch);
//  }
//
//  printf("\nEnd of file\n");
//
//  // close file
//  fclose(fptr);
//
//  return 0;
//}


#include <stdio.h>

int main(void) {
  // creating a FILE variable
  FILE *fptr;

  // integer variable
  int id, score;
  int i, s;

  // character variable
  char name[255];
  char n[255];

  // open the file in write mode
  fptr = fopen("student.txt", "w");

  if (fptr != NULL) {
    printf("File created successfully!\n");
  }
  else {
    printf("Failed to create the file.\n");
    // exit status for OS that an error occured
    return -1;
  }

  // get student detail
  printf("Enter student name: ");
  gets(name);
  printf("Enter student ID: ");
  scanf("%d", &id);
  printf("Enter student score: ");
  scanf("%d", &score);

  // write data in file
  fprintf(fptr, "%d %d %s", id, score, name);

  // close connection
  fclose(fptr);

  // open file for reading
  fptr = fopen("student.txt", "r");

  // display detail
  printf("\nStudent Details:\n");
  fscanf(fptr, "%d %d %[^\n]s", &i, &s, n);
  printf("ID: %d\n", i);
  printf("Name: %s\n", n);
  printf("Score: %d\n", s);

  printf("\nEnd of file.\n");

  // close connection
  fclose(fptr);

  return 0;
}
