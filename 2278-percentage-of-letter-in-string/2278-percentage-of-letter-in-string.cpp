class Solution {
public:
    int percentageLetter(string s, char letter) {
        int a=0;
        for(auto c:s){
            if(c==letter)
                a++;
        }
        int n= s.length();
        return floor(((float)a*(float)100)/(float)n);
    }
};