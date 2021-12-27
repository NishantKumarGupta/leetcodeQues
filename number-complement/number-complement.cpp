class Solution {
public:
    int findComplement(int num) {
        int count=0,temp=num;
        while(num){
            count++;
            num=num>>1;
        }
        int temp2=pow(2,count)-1;
        return temp^temp2;
    }
};