int Solution::firstMissingPositive(vector<int> &A) {
     sort(A.begin(),A.end());
    int i;
    int start;
    
    
    for(i=0;i<A.size();i++)
    {
        if(A[i]>=0)
            break;
    }
    if(A[i]>1)
        return 1;
    if(i==A.size())
        return 1;
    start=A[i];
    int j;
    for(j=i+1;j<A.size();j++)
    {
        if(A[j]!=start+1)
            return start+1;
        start=A[j];
    }
    return start+1;
}

