/***************************************************************
 *                   TYPEDEF DEMONSTRATION PROGRAM
 *
 * This program shows how typedef is used in real C projects
 * to improve readability, maintainability, and abstraction.
 ***************************************************************/

#include <stdio.h>

/***************************************************************
 * 1️⃣ TYPEDEF FOR BASIC DATA TYPES
 * Used heavily in embedded systems and OS kernels
 ***************************************************************/
typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;

/***************************************************************
 * 2️⃣ TYPEDEF FOR ENUM
 * Makes enum usage cleaner and readable
 ***************************************************************/
typedef enum
{
    OFF = 0,
    ON  = 1
} DeviceState;

/***************************************************************
 * 3️⃣ TYPEDEF FOR STRUCT
 * Common in drivers, protocols, and data models
 ***************************************************************/
typedef struct
{
    u32 id;
    u16 value;
    DeviceState state;
} Device;

/***************************************************************
 * 4️⃣ TYPEDEF FOR POINTER TYPE
 * Improves readability for pointer-heavy code
 ***************************************************************/
typedef Device* DevicePtr;

/***************************************************************
 * 5️⃣ TYPEDEF FOR FUNCTION POINTER
 * Used in callbacks, drivers, RTOS hooks
 ***************************************************************/
typedef int (*Operation)(int, int);

/***************************************************************
 * FUNCTION DEFINITIONS
 ***************************************************************/
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

/***************************************************************
 * MAIN FUNCTION
 ***************************************************************/
int main()
{
    printf("===== TYPEDEF FULL DEMO START =====\n\n");

    /***********************************************************
     * Using typedef basic types
     ***********************************************************/
    u8  byteValue = 10;
    u16 shortValue = 500;
    u32 longValue = 100000;

    printf("Basic typedef values:\n");
    printf("u8  = %d\n", byteValue);
    printf("u16 = %d\n", shortValue);
    printf("u32 = %d\n\n", longValue);

    /***********************************************************
     * Using typedef struct
     ***********************************************************/
    Device dev1;
    dev1.id = 101;
    dev1.value = 250;
    dev1.state = ON;

    printf("Device details using typedef struct:\n");
    printf("ID: %u, Value: %u, State: %s\n\n",
           dev1.id,
           dev1.value,
           (dev1.state == ON) ? "ON" : "OFF");

    /***********************************************************
     * Using typedef pointer
     ***********************************************************/
    DevicePtr devPtr = &dev1;

    printf("Accessing struct via typedef pointer:\n");
    printf("ID: %u (via pointer)\n\n", devPtr->id);

    /***********************************************************
     * Using typedef function pointer
     ***********************************************************/
    Operation op;

    op = add;
    printf("Addition using function pointer typedef: %d\n", op(20, 10));

    op = subtract;
    printf("Subtraction using function pointer typedef: %d\n\n", op(20, 10));

    printf("===== TYPEDEF FULL DEMO END =====\n");

    return 0;
}
