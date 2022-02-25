class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream v1(version1),v2(version2);
        while(v1 || v2){
            int a1,a2;
            if(v1.rdbuf()->in_avail() == 0)
                a1=0;
            else 
                v1>>a1;
            if(v2.rdbuf()->in_avail() == 0)
                a2=0;
            else
                v2>>a2;
            if(a1>a2)
                return 1;
            else if(a2>a1)
                return -1;
            char c;
            v1>>c;
            v2>>c;
        }
        return 0;
    }
};