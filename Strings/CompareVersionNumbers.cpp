vector<string> split(const string& s)
{
vector<string> tokens;
string token;
istringstream tokenStream(s);
while (getline(tokenStream, token,'.'))
{
    int i=0;
    int len=token.size();
    while(token[i]=='0'&&i<len)
    {
        i++;
    }
    if(i==len)
        i--;
    token = token.substr(i,len);
    tokens.push_back(token);
}
return tokens;
}
int Solution::compareVersion(string str1, string str2) {
    
    vector<string> v1 = split(str1);
   
    vector<string> v2 = split(str2);
    int i;

    i=0;
    int j=0;
    while(i<v1.size()&&j<v2.size())
    {
        if(v1[i].size()<v2[i].size())
        {
             return -1;
        }
        if(v1[i].size()>v2[i].size())
        {
            return 1;
        }
        if(v1[i].size()==v2[j].size())
        {
            if(v1[i]<v2[j])
                return -1;
            if(v1[i]>v2[j])
                return 1;
        }
        i++;
        j++;
    }
    while(j<v2.size())
    {
        if(v2[j]!="0")
        {
            return -1;
        }
        j++;
    }
    while(i<v1.size())
    {
        if(v1[i]!="0")
        {
            return 1;
        }
        i++;
    }
return 0;
}

