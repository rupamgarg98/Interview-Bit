/**
 * @input A : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 int isPrime(int A)
 {
     int i;
     for(i=2;i<=sqrt(A);i++)
    {
        if(A%i==0)
            return 0;
    }
    return 1;
 }
int* primesum(int A, int *len1) {
    int i;
    int *result=(int*)malloc(sizeof(int)*2);
    *len1=2;
    for(i=2;i<=(A);i++)
    {
        if(isPrime(i))
        {
            if(isPrime(A-i))
            {
                result[0]=i;
                result[1]=A-i;
                return result;
            }
        }
    }
    return result;
}

