class Solution {
public:
    string intToRoman(int num) {
        string res="";
        int temp=num/1000;
        num=num%1000;
        for(int i=0;i<temp;i++){
            res+="M";
        }
        temp=num/900;
        num=num%900;
        for(int i=0;i<temp;i++){
            res+="CM";
        }
        temp=num/500;
        num=num%500;
        for(int i=0;i<temp;i++){
            res+="D";
        }
        temp=num/400;
        num=num%400;
        for(int i=0;i<temp;i++){
            res+="CD";
        }
        temp=num/100;
        num=num%100;
        for(int i=0;i<temp;i++){
            res+="C";
        }
        temp=num/90;
        num=num%90;
        for(int i=0;i<temp;i++){
            res+="XC";
        }
        temp=num/50;
        num=num%50;
        for(int i=0;i<temp;i++){
            res+="L";
        }
        temp=num/40;
        num=num%40;
        for(int i=0;i<temp;i++){
            res+="XL";
        }
        temp=num/10;
        num=num%10;
        for(int i=0;i<temp;i++){
            res+="X";
        }
        temp=num/9;
        num=num%9;
        for(int i=0;i<temp;i++){
            res+="IX";
        }
        temp=num/5;
        num=num%5;
        for(int i=0;i<temp;i++){
            res+="V";
        }
        temp=num/4;
        num=num%4;
        for(int i=0;i<temp;i++){
            res+="IV";
        }
        temp=num/1;
        num=num%1;
        for(int i=0;i<temp;i++){
            res+="I";
        }
        return res;
    }
};