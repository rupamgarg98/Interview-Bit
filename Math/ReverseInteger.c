/**
 * @input A : Integer
 * 
 * @Output Integer
 */
 #include<limits.h>
int reverse(int num) {
    long newnum=0;
    while(num)
    {
        newnum=(newnum*10)+(num%10);
        num=num/10;
    }
    if(newnum>INT_MAX||newnum<INT_MIN)
        return 0;
    return (int)newnum;
   
  
}


