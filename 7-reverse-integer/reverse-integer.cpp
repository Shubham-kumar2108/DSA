class Solution {
public:
    int reverse(int x) {

        int rev = 0 ;

        while (x!=0){
            int digit = x % 10;

            if (rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }

            rev = rev*10 + digit;

            x /= 10;
        }

    //   int revNum = 0;

    //   while(x!=0) {
    //     int dig = x % 10;
    //     if(revNum > INT_MAX/10 || revNum < INT_MIN/10){
    //         return 0;
    //     }
    //     revNum = revNum * 10 + dig;
    //     x=x/10;
    //   }  
    //   return revNum;
    return rev;
    }
};