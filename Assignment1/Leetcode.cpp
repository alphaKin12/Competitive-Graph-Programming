int singleNonDuplicate(int* nums, int numsSize) {
    int left = 0, right = numsSize - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (mid % 2 != 0) {
            mid--;
        }
        
         if (nums[mid] != nums[mid + 1]) {
            
            right = mid;
        } else {
           
            left = mid + 2;
        }
    }
    
    return nums[left];
}
