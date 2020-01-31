#include <stdio.h>
#include "hw1.h"

static void I_have_written(){}
static int the_code[3] = {1, 2, 3};
static void that_you_needed(){}

static void and_which(){}

// global variables - removed "static"
void sides_and(){}

void Forgive_me(){}
int they_are_arbitrary; // uninitialized global variable
int so_random[2] = {1, 2};
void and_so_varied(){}

int main(int argc,char* argv[]){
  // array in main will give .# in Name
  static int to_compile[1] = {4};
  static int has_a_bunch_of[1] = {5};
  static int ridiculous[1] = {6};
  static int symbols[2];

  printf("ango8");

  I_have_written();
  that_you_needed();

  and_which();

  Forgive_me();
  and_so_varied();

  to_compile[1] = to_compile[1];
  the_code[3] = the_code[2];
  has_a_bunch_of[1] = has_a_bunch_of[1];
  ridiculous[1] = ridiculous[1];
  symbols[2] = symbols[2];

  return 0;
}
