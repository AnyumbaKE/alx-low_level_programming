

**0x14-Bit Manipulation**


Bit Manipulation is a technique used in a variety of problems to get the solution in an optimized way. This technique is very effective from a Competitive Programming point of view. It is all about Bitwise Operators which directly works upon binary numbers or bits of numbers that help the implementation fast. Below are the Bitwise Operators that are used:

Bitwise AND (&)
Bitwise OR (|)
Bitwise XOR (^)
Bitwise NOT (!)
All data in computer programs are internally stored as bits, i.e., as numbers 0 and 1.
 

Bit representation

In programming, an n-bit integer is internally stored as a binary number that consists of n bits. For example, the C++ type int is a 32-bit type, which means that every int number consists of 32 bits.

The int number 43 = 00000000000000000000000000101011

The bits in the representation are indexed from right to left. To convert a bit representation bk ···b2 b1 b0 into a number, we can use the formula 
bk2k +…+ b222 + b121 + b020. 

 E.g., 1·25+1·23 +1·21 +1·20 = 43.

The bit representation of a number is either signed or unsigned.
Usually, a signed representation is used, which means that both negative and positive numbers can be represented.
A signed variable of n bits can contain any integer between -2n-1 and 2n-1 – 1
The int type in C++ is a signed type, so an int variable can contain any integer between -231 and 231 – 1.

The first bit in a signed representation is the sign of the number, 0 for non-negative numbers and 1 for negative numbers and the remaining n−1 bits contain the magnitude of the number.

Two’s complement is used, which means that the opposite number of a number is calculated by first inverting all the bits in the number, and then increasing the number by one.
The bit representation of the int number −43 is 11111111111111111111111111010101
In an unsigned representation, only non-negative numbers can be used, but the upper bound for the values is larger.
An unsigned variable of n bits can contain any integer between 0 and 2n −1.

In C++, an unsigned int variable can contain any integer between 0 and 232 −1.
There is a connection between the representations:
A signed number −x equals an unsigned number 2n − x.
For example, the following pseudo-code snippet shows that the signed number 
x = −43 equals the unsigned number y = 232 −43: 
