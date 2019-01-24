/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer
 */
int coverPoints(int* A, int n1, int* B, int n2) {
    if(n1==1)
        return 0;
    int countt=0;
    int i;
    for(i=0;i<n1-1;i++)
    {
        int diffa=abs(A[i+1]-A[i]);
        int diffb=abs(B[i+1]-B[i]);
        if(diffa>diffb)
            countt+=diffa;
        else
            countt+=diffb;
    }
    return countt;
}
