#include "stdio.h"

int main() 

{ 

  int x, y = 5, z = 5; 

  x = y == z; 

  printf("%d", x); 

  getchar(); 

  return 0; 

}



/*
The crux of the question lies in the statement x = y==z. 
The operator == is executed before = because precedence of comparison operators (<=, >= and ==) is 
higher than assignment operator =. 
The result of a comparison operator is either 0 or 1 based on the comparison result. 
Since y is equal to z, value of the expression y == z becomes 1 and the value is assigned to x via the assignment operator.


*/



