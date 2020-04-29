#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// halloxxxx
 
/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
    while (*text != '\0') {
        if(*text >= 'a' && *text <= 'z') {      //removed additional brackets
            *text = *text -32;
        }
        // Hier könnte Ihre Werbung stehen!
        text++;
    }
}

void test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  printf("%s --> %s\n", text, newString);
}


int main(int argc, char const *argv[]) {

  test("xyz");
  test("this is a test");
  test("12356!!!!???"); 
  
  return 0;
}
