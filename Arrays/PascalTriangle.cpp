vector<vector<int> > Solution::solve(int A) {
     vector<vector<int>> vm(A, std::vector<int>(A,0)); // pre-allocate memory
    int i,j;
    for (i = 0; i < A; ++i)
        for(j = 0; j<A; ++j)
        {
            if(j<=i)
            {if(i==j||j==0)
            {
                vm[i][j]=1;
            }
            else
            {
                vm[i][j]=vm[i-1][j-1]+vm[i-1][j];
            }
            }
            else
            {
                vm[i].pop_back();
            }
        }   
        
return vm;
    
}
