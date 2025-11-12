/*  little endian to big endian conversion 





| Byte | Position                     | Meaning        |
| ---- | ---------------------------- | -------------- |
| B3   | Most Significant Byte (MSB)  | Leftmost byte  |
| B2   | 2nd                          |                |
| B1   | 3rd                          |                |
| B0   | Least Significant Byte (LSB) | Rightmost byte |



Big Endian: 12 34 56 78

Little Endian: 78 56 34 12


num = 0x12345678

| Byte | Extraction (Mask & Shift)      | Value (Hex) | Position After Shift | Final Position in Big Endian |
| ---- | ------------------------------- | ------------| ---------------------| ----------------------------- |
| B0   | (num & 0x000000FF) >> 0         | 0x78        | 0                    | Shifted to left by 24 bits    |
| B1   | (num & 0x0000FF00) >> 8         | 0x56        | 0                    | Shifted to left by 16 bits    |
| B2   | (num & 0x00FF0000) >> 16        | 0x34        | 0                    | Shifted to left by 8 bits     |
| B3   | (num & 0xFF000000) >> 24        | 0x12        | 0                    | Shifted to right by 0 bits    |
| Byte | Final Position Calculation               | Resulting Value (Hex) |
| ---- | ---------------------------------------- | ---------------------- |
| B0   | 0x78 << 24                              | 0x78000000             |
| B1   | 0x56 << 16                              | 0x00560000             |
| B2   | 0x34 << 8                               | 0x00003400             |
| B3   | 0x12 << 0                               | 0x00000012             |
| Byte | Final Position Calculation               | Resulting Value (Hex) |
| ---- | ---------------------------------------- | ---------------------- |
| B0   | 0x78 << 24                              | 0x78000000             |
| B1   | 0x56 << 16                              | 0x00560000             |
| B2   | 0x34 << 8                               | 0x00003400             |
| B3   | 0x12 << 0                               | 0x00000012             |
| Combined Result | 0x78563412                     |
| Original Number | 0x12345678                 |

*/






#include <stdio.h>

unsigned int convertEndian(unsigned int num)
{
    unsigned int byte0, byte1, byte2, byte3;

    // Extract individual bytes using bit masking and shifting
    byte0 = (num & 0x000000FF) >> 0;   // LSB
    byte1 = (num & 0x0000FF00) >> 8;
    byte2 = (num & 0x00FF0000) >> 16;
    byte3 = (num & 0xFF000000) >> 24;  // MSB

    // Combine them in reverse order
    return ((byte0 << 24) | (byte1 << 16) | (byte2 << 8) | (byte3 << 0));
}

int main()
{
    unsigned int num, result;

    printf("Enter a 32-bit integer (in hex, e.g., 0x12345678): ");
    scanf("%x", &num);

    result = convertEndian(num);

    printf("\nOriginal (Little Endian): 0x%08X", num);
    printf("\nConverted (Big Endian):  0x%08X\n", result);

    return 0;
}




/* a=(a<<24)|(a>>24)|((a>>8)&(0x0000ff00))|((a<<8)&(0x00ff0000));




a = 0x12345678
In memory (Little Endian layout):
78 56 34 12

We want to reverse it → 12 34 56 78

Now let’s understand what each operation does:

🧩 1️⃣ (a << 24)
Moves lowest 8 bits (byte 0) to the highest byte position.

makefile
Copy code
a = 0x12345678
Binary: [12][34][56][78]
Shift left 24 → [78] moves to MSB position
Result = 0x78000000
✅ Now LSB byte 78 becomes MSB.

🧩 2️⃣ (a >> 24)
Moves highest 8 bits (byte 3) to lowest byte position.

Copy code
0x12345678 >> 24 = 0x00000012
✅ Now MSB 12 becomes LSB.

🧩 3️⃣ ((a >> 8) & 0x0000FF00)
Let’s see what this does:

a >> 8 → moves 34 56 78 one byte lower → 0x00123456

& 0x0000FF00 → isolates the second byte (which was originally 56)

Result → 0x00005600

✅ So byte 56 moves to the correct position for endian reversal.

🧩 4️⃣ ((a << 8) & 0x00FF0000)
a << 8 → shifts left by one byte → 0x34567800

& 0x00FF0000 → extracts byte 34 in the correct reversed position.

Result → 0x00340000

🧩 5️⃣ Combine with OR (|)
Now OR all parts:

bash
Copy code
(a << 24)      → 0x78000000
(a >> 24)      → 0x00000012
((a >> 8)&mask)→ 0x00005600
((a << 8)&mask)→ 0x00340000
--------------------------------
Final Result = 0x78563412 ✅
✅ Output
For input a = 0x12345678
Result after that one line:

ini
Copy code
a = 0x78563412

*/