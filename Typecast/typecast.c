/*What is Type Casting in C?

Type casting in C means converting one data type into another manually.
It tells the compiler to treat a variable as another type.*/ 



#include <stdio.h>
int main() {
    float f = 7.9;
    int i;

    i = (int)f; // Explicit type casting

    printf("Float value = %f\n", f);
    printf("Integer value after type casting = %d\n", i);

    return 0;
}
/*In the above example, we have a float variable 'f' with a value of 7.9. 
When we type cast it to an integer using (int)f, the decimal part is truncated, 
and the resulting integer value is 7. This demonstrates explicit type casting in C.

✅ Why do we need Type Casting in C?
1️⃣ To prevent wrong / unwanted results

If we don’t typecast, C may perform integer calculations even when we expect fractions.



int a = 5, b = 2;
float result = a / b; // both integers
printf("%f", result);
// Output: 2.000000
The output should be 2.5 but since both variables are integers, the result will also be an integer.


*/