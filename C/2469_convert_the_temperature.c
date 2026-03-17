*
Problem: 2469. Convert the Temperature

Approach:
1. Convert Celsius to Kelvin using:
   Kelvin = Celsius + 273.15
2. Convert Celsius to Fahrenheit using:
   Fahrenheit = Celsius * 1.8 + 32
3. Store both values in a dynamically allocated array.
4. Return the array.

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

