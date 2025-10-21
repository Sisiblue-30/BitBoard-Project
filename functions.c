#include <stdio.h>

//This set set the bit to 1
unsigned int SetBit(unsigned int value, int pos) {
    if (pos < 0 || pos >= (int)(sizeof(unsigned int) * 8)) {
        return value;
    }
    return (value | (1u << pos));
}

//This set the bit to 0
unsigned int ClearBit(unsigned int value, int pos) {
    if (pos < 0 || pos >= (int)(sizeof(unsigned int) * 8)) {
        return value;
    }
    return (value & ~(1u << pos));
}

//This changes a bit over from 1 to 0 or 0 to 1 (like toggling on or off)
unsigned ToggleBit(unsigned value, int pos) {
    if (pos < 0 || pos >= (int)(sizeof(unsigned int) * 8)) {
        return value;
    }
    return (value ^ (1u << pos));
}


//This is meant to get the value of the bit inputted
int GetBit(unsigned value, int pos) {
    if (pos < 0 || pos >= (int)(sizeof(unsigned int) * 8)) {
        return 0;
    }
    return(int)((value >> pos) & 1u);
}

//This is meant to count the 1s in the value
int CountBits(unsigned int value) {
    int count = 0;
    while (value > 0) {
        count = count + (value & 1ULL);
        value >>= 1;
        }
    return count;
}

//This will shift the bit to the left by however many positions is inputted
unsigned int ShiftLeft(unsigned int value, int pos) {
    if (pos < 0 || pos >= (int)(sizeof(unsigned int) * 8)) {
        return value;
    }
    return value << pos;
}

//This will shift the bit to the right by however many positions is inputted
unsigned int ShiftRight(unsigned int value, int pos) {
    if (pos < 0 || pos >= (int)(sizeof(unsigned int) * 8)) {
        return value;
    }
    return value >> pos;
}

//This prints out the the inputted value as a Binary Number
void PrintBinary(unsigned int value) {
    for (int i = (int)(sizeof(unsigned int) * 8) - 1; i >= 0; --i) {
        printf("%c", (value & (1u<<i)) ? '1' : '0');

        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
    }
    printf("\n");
}

//This prints out the inputted value as a Hex Number
void PrintHex(unsigned int value) {
    printf("0x%016llX\n", value);
}