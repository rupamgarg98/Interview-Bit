/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
int isNumber(const char* str) {
     int len=strlen(str);
    //printf("%d\n",len);
    int i=0;
    while(str[i]==' ')
    {
        i++;
    }
    while(str[len-1]==' ')
    {
        len--;
    }
    int signcount=0;
    int ecount=0;
    int dotcount=0;
    if(!isdigit(str[i])&&str[i]!='+'&&str[i]!='-'&&str[i]!='.')
     {
         //printf("0\n");
         return 0;
     }
    if(!isdigit(str[len-1]))
    {
        //printf("0\n");
        return 0;
    }
    if(str[i]=='.')
    {
        dotcount++;
    }
    int j;
    for(j=i+1;j<len;j++)
    {
         if(!isdigit(str[j])&&str[j]!='e'&&str[j]!='+'&&str[j]!='-'&&str[j]!='.')
        {
          //printf("0\n");
            return 0;
        }
        if(str[j]=='e')
        {
            if(ecount>0)
            {
                    //printf("0\n");
                    return 0;
            }
            if(str[j-1]=='.')
            {
                //printf("0\n");
                return 0;
            }
            ecount++;
        }
        if(str[j]=='.')
        {
            if(ecount>0||dotcount>0)
            {
                //printf("0\n");
                return 0;
            }
            if(str[j+1]=='e')
            {
                //printf("0\n");
                return 0;
            }
            dotcount++;
        }
        if(str[j]=='+'||str[j]=='-')
        {
            if(j!=i&&str[j-1]!='e')
            {
                //printf("0\n");
                return 0;
            }
            signcount++;
        }

    }
return 1;
}
