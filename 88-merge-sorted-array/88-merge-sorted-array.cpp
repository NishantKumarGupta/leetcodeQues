class Solution {
public:
    //Two solutions pop into mind the first being enter the second array into the first array and sort the array using the stl sort function
    //The other method and more interview appropriate is start traversal from end and end and insert the largest elements there
    
    //solving using the second method here
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int itr = m+n-1, nums1Itr = m-1, nums2Itr = n-1;
        while(nums1Itr<itr and (nums1Itr>=0 and nums2Itr>=0)){
            if(nums2[nums2Itr] >= nums1[nums1Itr]){
                nums1[itr] = nums2[nums2Itr];
                nums2Itr--;
                itr--;
            }
            else{
                swap(nums1[nums1Itr], nums1[itr]);
                nums1Itr--;
                itr--;
            }
        }
        while(nums2Itr>=0){
            nums1[itr] = nums2[nums2Itr];
            itr--;
            nums2Itr--;
        }
    }
};