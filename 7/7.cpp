class Solution {
public:
    int reverse(int x) {
        if(x==0) return x;
        int n = x%10; 
        x/=10;
        while(x!=0){
            n = n*10 + x%10;
            x/=10;
        }
        return n;
    }
};
//primary implementation TODO: to be changed