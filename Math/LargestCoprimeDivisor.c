/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
 int gcd(int A,int B)
{
    if(A==B)
        return A;
    else if(A>B)
    {
        if(B==0)
            return A;
        return gcd(B,A%B);
    }
    else
    {
        if(A==0)
            return B;
        return gcd(A,B%A);
    }
}
int cpFact(int A, int B) {
 
    while(gcd(A,B)!=1)
    {
        int gc=gcd(A,B);
        A=A/gc;
    }
    return A;
}

