class Solution {
public: //SFI
    /*
        Method 1: Brute force approach
        Keep an answer variable and keep multiplying the base number to it 'n' number of
        times
        Tc- O(n) Sc - O(1)
        
        Method 2: Binary exponentiation
        Recursively find the value of x^(n/2) and multiply it with each other to have the
        answer
        Tc - O(logn) SC- O(1)
    */
    
    //Writing the binary exponentiation approach
    double myPow(double x, int n) {
        double res = (double)(1.0);
        long int p = n;
        if(n<0)
            p*=(-1);
        
        while(p){
            if(p&1){
                res*=x;
                p--;
            }
            else{
                x=(x*x);
                p=p>>1;
            }
        }
        
        if(n >= 0)
            return res;
        
        else
            return (double)(1.0)/res;
    }
};