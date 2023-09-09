// Program to test if two strings are equal using pointers

#include <stdio.h>
#include <stdbool.h>

// Declare Functions
bool areEqual (const char *, const char *);

int main(void) {

  // Define Strings
  const char s1[] = "string compare test";
  const char s2[] = "string";

  printf ("%d\n", areEqual(s1, s2));
  printf ("%d\n", areEqual(s1, s1));
  printf ("%d\n", areEqual(s2, "string"));
  
  return 0;
}

// Define Functions
bool areEqual (const char *str1, const char *str2) {
  bool equal = false;


  for (  ; *str1 && *str2; str1++, str2++) {
  }
  if (*str1 == *str2)
    equal = true;

  return equal;
}