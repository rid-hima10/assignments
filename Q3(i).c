#include <stdio.h>
#include <string.h>

int main() {
    // Using string library
    char str1[] = "Hello";
    char str2[] = "World";
    
    // 1. String comparison
    int comparison1 = strcmp(str1, str2);
    printf("1. String Comparison using string library: %d\n", comparison1);

    // 2. String concatenation
    char concat1[20];
    strcpy(concat1, str1);
    strcat(concat1, str2);
    printf("2. String Concatenation using string library: %s\n", concat1);

    // 3. String reversal
    char reverse1[20];
    strcpy(reverse1, str1);
    strrev(reverse1);
    printf("3. String Reversal using string library: %s\n", reverse1);

    // 4. Length comparison
    size_t length1 = strlen(str1);
    size_t length2 = strlen(str2);
    int lengthComparison1 = length1 - length2;
    printf("4. Length Comparison using string library: %d\n", lengthComparison1);

    // Using character arrays
    char arr1[] = "Hello";
    char arr2[] = "World";

    // 1. String comparison
    int comparison2 = 0; // Implement character array comparison logic
    printf("1. String Comparison using character array: %d\n", comparison2);

    // 2. String concatenation
    char concat2[20];
    // Implement character array concatenation logic
    printf("2. String Concatenation using character array: %s\n", concat2);

    // 3. String reversal
    char reverse2[20];
    // Implement character array reversal logic
    printf("3. String Reversal using character array: %s\n", reverse2);

    // 4. Length comparison
    size_t length3 = 0; // Implement character array length calculation
    size_t length4 = 0; // Implement character array length calculation
    int lengthComparison2 = length3 - length4;
    printf("4. Length Comparison using character array: %d\n", lengthComparison2);

    return 0;
}