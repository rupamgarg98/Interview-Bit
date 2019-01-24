/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
int romanToInt(char* str) {
    int result=0;
    int len=strlen(str);
    int i;
    for(i=len-1;i>=0;i--)
    {
        if(str[i]=='I')
            result++;
        if(str[i]=='V'&&str[i-1]!='I')
            result+=5;
        if(str[i]=='V'&&str[i-1]=='I')
        {
            result+=4;
            i--;
            continue;
        }
        if(str[i]=='X'&&str[i-1]!='I')
            result+=10;
        if(str[i]=='X'&&str[i-1]=='I')
        {
            result+=9;
            i--;
            continue;
        }
        if(str[i]=='L'&&str[i-1]!='X')
            result+=50;
        if(str[i]=='L'&&str[i-1]=='X')
        {
            result+=40;
            i--;
            continue;
        }
         if(str[i]=='C'&&str[i-1]!='X')
            result+=100;
        if(str[i]=='C'&&str[i-1]=='X')
        {
            result+=90;
            i--;
            continue;
        }
         if(str[i]=='D'&&str[i-1]!='C')
            result+=500;
        if(str[i]=='D'&&str[i-1]=='C')
        {
            result+=400;
            i--;
            continue;
        }
         if(str[i]=='M'&&str[i-1]!='C')
            result+=1000;
        if(str[i]=='M'&&str[i-1]=='C')
        {
            result+=900;
            i--;
            continue;
        }
    }
    return result;
}

