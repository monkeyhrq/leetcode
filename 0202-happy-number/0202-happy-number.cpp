class Solution {
public:
    bool isHappy(int n) {
        //把每個位數 都做平方相加，如果一直無窮迴圈就false，如果是1就true
        //龜兔賽跑 快地走兩步 慢的走一步，當兩邊都重複 是1就是true，不是就false
        auto getNext = [&](int n){
            int next = 0;

            while (n != 0) {
            int d = n % 10;
            next = next + (d * d);
            n = n /10;
            }
            return  next;
        };
        
        int fast = n;
        int slow = n;
        
        do{
            fast = getNext(getNext(fast));
            slow = getNext(slow);
        } while (fast != slow);
        
        return fast == 1;
    }
};