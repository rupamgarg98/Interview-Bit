public class Solution {
    public int isPalindrome(String A) {
    A=A.toLowerCase();
    char[] temp2=A.toCharArray();
    int k=temp2.length-1;
   for(char j:temp2)
    {
        if(j<'0'||(j>'9'&&j<'a')||j>'z')
        {
            continue;
        }
        while(temp2[k]<'0'||(temp2[k]>'9'&&temp2[k]<'a')||(temp2[k]>'z'))
        {
            k--;
    
        }
        if(j!=temp2[k])
            return 0;
        k--;
    }
    return 1;
    }
}
