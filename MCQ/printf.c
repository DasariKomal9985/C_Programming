#include <stdio.h>
// Assume base address of "GeeksQuiz" to be 1000
int main()
{
   printf(5 + "GeeksQuiz");
   return 0;
}


//printf is a library function defined under stdio.h header file. The compiler adds 5 to the base address of the string through the expression 5 + "GeeksQuiz" .
 //Then the string "Quiz" gets passed to the standard library function as an argument.