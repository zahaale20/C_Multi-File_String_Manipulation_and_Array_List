#include "checkit.h"
#include "task1.h"

// Given Test
void test1() {
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

// Testing function str_lower
void test2() {
   char input[] = "AlEx ZaHaRiA";
   char result[15];
   char *expected = "alex zaharia";

   str_lower(input, result);

   checkit_string(result, expected);
}

// Testing function str_lower_mutate
void test3() {
   char input[] = "rOcK CrEEk";
   char *expected = "rock creek";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

int main(void) {
   test1();
   test2();
   test3();
   return 0;
}
