class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long int rev=0, temp=x;
        while(x){
            rev=rev*10+(x%10);
            x=x/10;
        }
        if(rev==temp)
            return true;
        else return false;
    }
};