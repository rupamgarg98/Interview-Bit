/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int gcd(int A, int B) {
    if(A==B)
        return A;
    if(A>B)
    {
        if(B==0)
            return A;
        return gcd(B,A%B);
    }
    return (gcd(B,A));
}

