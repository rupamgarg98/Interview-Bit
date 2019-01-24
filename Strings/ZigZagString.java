public class Solution {
    public String convert(String str, int n) {
            if(n==1)
                return str;
                String[] ans= new String[n];
                char[] temp=str.toCharArray();
                int j=0;
                while(j<n)
                {
                        ans[j]="";
                        j++;
                }
                int i=0;
                        j=0;
                while(i<temp.length)
                {
 
                        while(i<temp.length&&j<n)
                        {
                                ans[j]=ans[j]+temp[i];
                                j++;
                                i++;
                        }
                        j=j-2;
                        while(i<temp.length&&j>=0)
                        {
                                ans[j]=ans[j]+temp[i];
                                j--;
                                i++;
                        }
                        j=j+2;
 
                }
                String result="";
                j=0;
                while(j<n)
                {
                        result=result+ans[j];
                        j++;
                }
              return result;
 
    }
}
