/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* maxset(int* A, int n1, int *len1) {
    long long int start=0,end=0,sum=INT_MIN,max=INT_MIN,anslength=0,ansstart=0,ansend=-1;
    int i=0;
    while(i<n1)
    {
        if(A[i]>=0)
        {
            sum=0;
            start=i;
            while(A[i]>=0&&i<n1)
            {
                sum=sum+A[i];
                i++;
            }
        
        end=i-1;
         if((sum>max)||(sum==max&&end-start+1>anslength))
    {
        ansstart=start;
        ansend=end;
        max=sum;
        anslength=end-start+1;
    }
        }
    i++;
    }
    int *ans=(int*)malloc(sizeof(int)*(ansend-ansstart+1));
    int j=0;
    for(i=ansstart;i<=ansend;i++)
    {
        ans[j]=A[i];
        j++;
    }
    *len1=(ansend-ansstart+1);
   return ans;
}
