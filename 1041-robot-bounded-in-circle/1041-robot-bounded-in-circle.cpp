class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dir=1,x=0,y=0;
        for(auto c:instructions){
            if(c=='L')
                dir--;
            else if(c=='R')
                dir++;
            else{
                if(dir==1)
                    x++;
                else if(dir==2)
                    y++;
                else if(dir==3)
                    x--;
                else if(dir==0)
                    y--;
            }
            if(dir==-1)
                dir=3;
            else if(dir==4)
                dir=0;
        }
        if(dir!=1 or (x==0 and y==0))
            return true;
        else
            return false;
    }
};