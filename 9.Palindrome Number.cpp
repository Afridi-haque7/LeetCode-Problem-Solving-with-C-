class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        long reverse=0;
        bool result = false;
        int temp = x;
        if(x<0){
            return result;
        }
        else{
            while(temp!=0){
                rem = temp%10;
                reverse = reverse *10 + rem;
                temp = temp/10;
            }
            if(x == reverse)
                result = true;
            else
                result = false;
        }
       return result;
    }
};
