/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int isPalindrome(int n) {
     int divisor = 1;
     if(n<0)
        return 0;
    while (n / divisor >= 10)
        divisor *= 10;
 
    while (n != 0)
    {
        int leading = n / divisor; 
        int trailing = n % 10;

        if (leading != trailing)  
            return 0;
 
      
        n = (n % divisor) / 10;

        divisor = divisor / 100;
    }
    return 1;
}

