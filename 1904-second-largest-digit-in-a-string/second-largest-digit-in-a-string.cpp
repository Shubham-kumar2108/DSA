class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int secondLargest = -1;

        for (int i = 0 ; i < s.length(); i++){
           
            if(s[i] >= '0' && s[i] <= '9'){
                int num = s[i]-'0';
                if(num>largest){

                    secondLargest = largest;
                    largest = num;
                    
                }
                else if (num<largest && num>secondLargest){
                    secondLargest = num;
                }
            }
        }
        return secondLargest;
    }
};