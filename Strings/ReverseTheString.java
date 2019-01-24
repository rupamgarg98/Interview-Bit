public class Solution {
    public String reverseWords(String a) {
        String[] temp=a.split(" ");
        int j=temp.length-1;
        int i=0;
      
        String b="";
        b=b+temp[temp.length-1];
        i=0;
        j=temp.length-2;
        while(j>=i)
        {
         b=b+" ";
         b=b+temp[j];
         j--;
        }
        return b;
    }
}

