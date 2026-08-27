class Solution {
public:
    int square(int n){
        int sum = 0;
        while(n > 0){
            int digit = n%10;
            sum += digit*digit;
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = square(n); //you can call it as next number
        while(fast != 1 && slow != fast){ //we did not found 1 and we did not detect a cycle
            slow = square(slow);  //slow move by one step and fast moves by 2 step 
            fast = square(square(fast)); // if there is a cycle then fast cant't reach to 1 and so fals
        }
        return fast == 1;
    }
};