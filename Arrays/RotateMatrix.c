/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void rotate(int** A, int n11, int n12) {
    int i,j;
   int rows = n11;
   int cols = n12;
   for(i=0;i<rows;i++)
   {
       for(j=0;j<i;j++)
       {
           int temp=A[i][j];
           A[i][j]=A[j][i];
           A[j][i]=temp;
       }
   }
   for(i=0;i<cols/2;i++)
   {
       for(j=0;j<rows;j++)
       {
           int temp=A[j][i];
           A[j][i]=A[j][cols-1-i];
           A[j][cols-1-i]=temp;
       }
   }
  
}

