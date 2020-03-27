class Solution {
public:
    string countAndSay(int n) {
        string str="1";
        int i=2;
        while(i<=n){
            int l=str.length();
            string temp="";
            int t=1;
            for(int j=1;j<l;j++){
                if(str[j]==str[j-1])
                    ++t;
                else{
                    char ch='0'+t;
                    t=1;
                    temp+=ch;
                    temp+=str[j-1];
                }
            }
            char ch='0'+t;
            temp+=ch;
            temp+=str[l-1];
            str=temp;
            ++i;
        }
        return str;
    }
};