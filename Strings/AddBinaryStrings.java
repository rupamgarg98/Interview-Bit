public class Solution {
    public String addBinary(String str1, String str2) {

                StringBuilder sb1 = new StringBuilder(str1);
                StringBuilder sb2 = new StringBuilder(str2);
                sb1.reverse();
                sb2.reverse();
                str1 = sb1.toString();
                str2 = sb2.toString();
                char temp1[] = str1.toCharArray();
                char temp2[] = str2.toCharArray();
                int i=0;
                int j=0;
                char c1,c2;
                int sum;
                int carry=0;
                String result="";
                while(i<temp1.length&&j<temp2.length)
                {
                        c1 = temp1[i];
                        c2 = temp2[j];
                        int a = Character.getNumericValue(c1);
                        int b = Character.getNumericValue(c2);
                        sum=a+b+carry;
                        if(sum==0)
                        {
                                result=result+"0";
                                carry=0;
                        }
                        else if(sum==1)
                        {
                                result=result+"1";
                                carry=0;
                        }
                        else if(sum==2)
                        {
                                result=result+"0";
                                carry=1;
                        }
                        else if(sum==3)
                        {
                                result=result+"1";
                                carry=1;
                        }
                        i++;
                        j++;
                }
                        if(i==temp1.length&&j!=temp2.length)
                {
                        while(j<temp2.length)
                        {
                                c2=temp2[j];
                                int b=Character.getNumericValue(c2);
                                sum=b+carry;
                                if(sum==0)
                                {
                                        result=result+"0";
                                        carry=0;
                                }
                                else if(sum==1)
                                {
                                        result=result+"1";
                                        carry=0;
                                }
                                else if(sum==2)
                                {
                                        result=result+"0";
                                        carry=1;
                                }
                                j++;
                        }
                }
                if(i!=temp1.length&&j==temp2.length)
                {
                        while(i<temp1.length)
                        {
                                c1=temp1[i];
                                int a=Character.getNumericValue(c1);
                                sum=a+carry;
                                if(sum==0)
                                {
                                        result=result+"0";
                                        carry=0;
                                }
                                else if(sum==1)
                                {
                                        result=result+"1";
                                        carry=0;
                                }
                                else if(sum==2)
                                {
                                        result=result+"0";
                                        carry=1;
                                }
                                i++;
                        }
                        
                }
                 if(carry==1)
                        result=result+"1";
                StringBuilder sbresult=new StringBuilder(result);
                sbresult.reverse();
                result=sbresult.toString();
               return result;

    }
}

