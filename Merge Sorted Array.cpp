class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp;
        for(int i = 0; i < m; i++){
            temp.push_back(nums1[i]);
        }
        nums1.clear();
        for(int i = 0; i < n; i++){
            nums1.push_back(nums2[i]);
        }
        for(int i = 0; i < m; i++){
            nums1.push_back(temp[i]);
        } 
        sort(nums1.begin(),nums1.end());
    }
};
