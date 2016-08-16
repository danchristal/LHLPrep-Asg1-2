#include <stdio.h>

/*FizzBuzz
  Print every number between 1 and 100. If the number is divisible by 3, print
  Fizz, if the number is divisible by 5, print Buzz. If the number is divisible
  by both 3 and 5, print FizzBuzz. Otherwise, print then number.
 */

int main() {

  int i;
  for(i = 1; i<=100; i++) {

    if(i%3==0 && i%5==0) //div by 3 and 5, alternatively by 15 would work.
      printf("FizzBuzz\n");
    else if(i%3==0) //if divisible by 3, print Fizz
      printf("Fizz\n");
    else if(i%5==0) //if divisibly by 5, print Buzz
      printf("Buzz\n");
    else
      printf("%d\n", i);       
  } 

  return 0;
}
