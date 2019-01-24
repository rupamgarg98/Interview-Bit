/**
 * @input A : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
char* countAndSay(int n) {
    int k=0;
    int i,j;
    char *prev="1";
    if(n==1)
        return prev;
    char*newstring=(char*)malloc(100000*sizeof(char));
    for(i=1;i<n;i++)
    {
        j=0;
        k=0;
        char mychar=prev[j];
        int count=0;
        newstring = (char*)malloc(100000*sizeof(char));
        while(prev[j]!='\0')
        {
            if(prev[j]==mychar)
             {
                  count++;
 
             }
            else
            {
                char ch = (count+'0');
                newstring[k]=ch;
                k++;
                newstring[k]=mychar;
                k++;
                count=1;
                mychar=prev[j];
            }
            j++;
        }
         char ch = (count+'0');
          newstring[k]=ch;
          k++;
        newstring[k]=mychar;
        k++;
        newstring[k]='\0';
        prev=newstring;
    }
    return newstring;
}
