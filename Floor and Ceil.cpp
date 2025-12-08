class Solution {
public:
    vector<int> getFloorAndCeil(vector<int> nums, int x) {
        int start = 0, end = nums.size() - 1;
        int floor=-1, ceil=-1;

        while (start <= end) {
            int mid = (start + end) / 2;

            if (nums[mid] == x) {
                return {x, x};
            }
            else if (nums[mid] < x) {   
                floor=nums[mid];  
                start = mid + 1;      
            }
            else {                    
                ceil= nums[mid];   
                end = mid - 1;         
            }
        }

        return {floor,ceil};
    }
};