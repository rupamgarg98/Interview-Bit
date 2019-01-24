vector<int> Solution::repeatedNumber(const vector<int> &A) {
    
    long long len=A.size();
    //long long actualsum = accumulate(A.begin(),A.end(),0);
    long long actualsum;
    for(int j=0;j<len;j++)
    {
        actualsum+=(unsigned long long)A[j];
    }
    long long sum = (long)(len*(len+1))/2;
    long long squaresum = (long)(len*(len+1)*(2*len+1))/6;
    unsigned long long actsquare =0;
    for(long long i=0;i<len;i++)
    {
        actsquare = actsquare+((unsigned long long)A[i]*(unsigned long long)A[i]);    
    }
    long long eq1 = actualsum-sum;
   
    long long eq2 = actsquare - squaresum;
   
    long long eq3 = eq2/eq1;
   
    int a = (int)(eq1+eq3)/2;
   
    int b = a-(int)eq1;
  
    vector<int> B;
    B.push_back(a);
    B.push_back(b);
    return B;
    
    
    
    
}

