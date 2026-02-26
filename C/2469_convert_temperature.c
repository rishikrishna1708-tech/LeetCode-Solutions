/*
Problem: 2469. Convert the Temperature

Approach:
Convert Celsius to Kelvin and Fahrenheit using standard formulas
and return both values in an array.

Time Complexity: O(1)
Space Complexity: O(1)

Language: C
*/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    
    double *result = (double*)malloc(2 * sizeof(double));
    
    result[0]=celsius + 273.15;
    result[1]=celsius * 1.80 + 32.00;
    
    *returnSize=2;
    return result;
}
