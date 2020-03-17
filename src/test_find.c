#include <stdio.h>
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))
#define TEST_FUNCTION(arr, val, ind) (printf("%s", find((arr), ARRAY_SIZE((arr)),  (val)) == (ind) ? "Test PASSED!\n" : "Test FAILED!\n"))

extern int find(int *array, int size, int value);

int main(void) {
    int array1[] = {7};
    TEST_FUNCTION(array1, 7, 0);
    TEST_FUNCTION(array1, 9, -1);
    int array2[] = {1, 3, 4, 6, 8, 9, 11};
    TEST_FUNCTION(array2, 6, 3);
    TEST_FUNCTION(array2, 12, -1);
    TEST_FUNCTION(array2, 1, 0);
    TEST_FUNCTION(array2, 9, 5);
    int array3[] = {1, 3};
    TEST_FUNCTION(array3, 7, -1);
    TEST_FUNCTION(array3, 1, 0);
    TEST_FUNCTION(array3, 3, 1);
    int array4[] = {3, 9, 161, 342, 7777};
    TEST_FUNCTION(array4, 3, 0);
    TEST_FUNCTION(array4, 7777, 4);
    TEST_FUNCTION(array4, 161, 2);  
    TEST_FUNCTION(array4, 341, -1);  
}
