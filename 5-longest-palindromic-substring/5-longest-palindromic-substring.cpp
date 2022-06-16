class Solution {
public:
    string longestPalindrome(string s) {
        if (s.size() <= 1)
            return s;
        
        else{
            int maxx =1;
            int flagTemp = 0;
            
            for(int i = 0; i< s.size(); i++)
                for (int j= s.size()-1; j>=i; j--)
                    if (s[i] == s[j]){  
                        int a = i;      
                        int b = j;
                        int flag = 1;
                        while(a<=b){    
                            if (s[a] == s[b]){ 
                                a++; b--;           
                            }
                            else{
                                flag = 0; 
                                break;
                            }
                        }
                        if (flag ==1 && maxx <(j-i+1)){  
                            maxx = j-i+1;  
                            flagTemp = i;
                        }    
                    }
            return s.substr(flagTemp,maxx);
        }
        
    }
};
