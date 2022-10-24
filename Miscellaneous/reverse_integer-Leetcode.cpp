class Solution {
public:
    int reverse(int x) {

        long data=x;
        int d;
        int result=0;
        int neg=0;
        if (data<0) {
            neg=1;
        }
        data=abs(data);
        
        do {
            d=data%10;
            data=data/10;
            if (((long)result*10)>INT_MAX) return 0;
            result=result*10 + d;         
            
        } while (data>0);
            
        if (neg) result=result*-1;
        
        return result;
        
    }

};