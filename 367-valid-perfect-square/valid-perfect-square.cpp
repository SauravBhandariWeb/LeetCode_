class Solution {
public:
    bool helper(long long n, int num) {// 4,9
        if(n==num) return true;
        return false;
    }
    bool isPerfectSquare(int num) { 
        if(num==1 || num==4) return true;
        for(long long i=1;i<num/2;i++){
            if(i*i>num) break;
            if(helper(i*i,num))return true;
        }
     return false;
     }
};