public class Solution {
    public void sortColors(ArrayList<Integer> a) {
        int len=a.size();
        int i=0;
        int count0=0;
        int count1=0;
        int count2=0;
        for(i=0;i<len;i++)
        {
            if(a.get(i)==0)
                count0++;
            else if(a.get(i)==1)
                    count1++;
            else if(a.get(i)==2)
                    count2++;
        }
        for(i=0;i<count0;i++)
            a.set(i,0);
        for(i=count0;i<count0+count1;i++)
            a.set(i,1);
        for(i=count0+count1;i<len;i++)
            a.set(i,2);
    }
}

