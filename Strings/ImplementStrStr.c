/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * @input B : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
int strStr(const char* str1, const char* str2) {
    int i,j=0;
    int k;
    int len1=strlen(str1);
    int len2=strlen(str2);
     char *result = malloc(len1 + len2 + 2); // +1 for the null-terminator
    // in real code you would check for errors in malloc here
    strcpy(result, str2);
    strcat(result,"$");
    strcat(result, str1);
   int*z = (int*)malloc(sizeof(int)*(len1+len2+1));
   z[0];
   int l=0;
   int r=0;
   for(i=1;i<len1+len2+1;i++)
   {
       if(i>r)
       {
           l=i;
           r=i;
           while(r<len1+len2+1&&result[r-l]==result[r])
            r++;
            z[i]=r-l;
            r--;
       }
       else
       {
           if(z[i-l]<(r-i+1))
            z[i]=z[i-l];
            else
            {
                l=i;
                while(r<len1+len2+1&&result[r-l]==result[r])
                    r++;
                z[i]=r-l;
                r--;
            }
       }
   }
   for(i=0;i<len1+len2+1;i++)
   {
       if(z[i]==len2)
            return (i-len2-1);
   }
   return -1;
}
