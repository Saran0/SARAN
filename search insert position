int searchInsert(int* nums, int numsSize, int target){
    int l = 0;
    int m = numsSize - 1;
    int a;
    
    while (l<= m) {
        a = l + (m - l) / 2;         //assigning it to the middle element to dec time complexity
        if (nums[a] == target) {     //check for equality
            return a;
        } else if (nums[a] < target) {      
            l = a + 1;                // goes to next index
        } else {                            
            m = a - 1;                // goes to previous index
        }
    }
    
    return l;
}
