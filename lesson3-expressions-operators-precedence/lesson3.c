/*
Lesson 3 — Exercise: Make change

Goal:
  Compute coin change for a fixed amount of cents using / and %.

Requirements:
  1) Define: int cents = 87;
  2) Compute counts of coins for denominations:
       50, 20, 10, 5, 2, 1
     using integer division and remainder.
  3) Print EXACTLY this format (one per line):

     cents=87
     50=1
     20=1
     10=1
     5=1
     2=1
     1=0
     left=0

Rules:
  - Do NOT hardcode the answers (like 50=1, etc.). Compute them.
  - Must use / and %.
  - left must be the remaining cents after all coins are accounted for.

Build & run:
  gcc -std=c11 lesson3.c -o lesson3
  ./lesson3
*/

#include <stdio.h>

int main(void) {

    int cents = 87;

    int fifty_cents = cents / 50;
    int remainder_after_50 = cents % 50;

    int twenty_cents = remainder_after_50 / 20;
    int remainder_after_20 = remainder_after_50 % 20;

    int ten_cents = remainder_after_20 / 10;
    int remainder_after_10 = remainder_after_20 % 10;

    int five_cents = remainder_after_10 / 5;
    int remainder_after_5 = remainder_after_10 % 5;

    int two_cents = remainder_after_5 / 2;
    int remainder_after_2 = remainder_after_5 % 2;


    // this step below is not needed of course, remainder after 2 says the same thing
    int one_cents = remainder_after_2 / 1;
    int remainder_after_1 = remainder_after_2 % 1;


    /* better to do this:
    int one_cents = remainder_after_2;
    int left = 0;
    */
    

    /*
    Another way to do it, is using one variable:

    int cents = 87;
    int left = cents;

    int c50 = left / 50; left %= 50;
    int c20 = left / 20; left %= 20;
    int c10 = left / 10; left %= 10;
    int c5  = left / 5;  left %= 5;
    int c2  = left / 2;  left %= 2;
    int c1  = left;      left = 0;

    
    */

    printf("cents=%d\n", cents);
    printf("50=%d\n", fifty_cents);
    printf("20=%d\n", twenty_cents);
    printf("10=%d\n", ten_cents);
    printf("5=%d\n", five_cents);
    printf("2=%d\n", two_cents);
    printf("1=%d\n", one_cents);
    printf("left=%d\n", remainder_after_1);
    return 0;
}
