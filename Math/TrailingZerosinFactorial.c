/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int trailingZeroes(int n) {
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of 
    // 5 and update count
    int i;
    for (i = 5; n/i >= 1; i *= 5)
        count += floor(n/i);
 
    return count;
}

