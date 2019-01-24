/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int Sqrt(int A) {
 
    long long start = 0;
    long long end = A;
    long long ans,mid;
    if(A==0)
        return 0;
    if(A==1||A==2)
        return 1;
    while(start<=end){
        mid = (start+end)/2;
        if(mid*mid==A){
            ans = mid;
            break;
        }
        if(mid*mid<A){
            start = mid+1;
            ans = mid;
        }
        else if(mid*mid>A){
            end = mid-1;
        }
    }
    return (int)ans;
}
