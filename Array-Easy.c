#include "base.h"

int removeDuplicates(int* nums, int numsSize){
    // Runtime Error
    /*
        Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

        Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums. More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result. It does not matter what you leave beyond the first k elements.

        Return k after placing the final result in the first k slots of nums.

        Do not allocate extra space for another array. You must do this by modifying the input array in-place with O(1) extra memory.

        Input: nums = [1,1,2]
        Output: 2, nums = [1,2,_]
        Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
        It does not matter what you leave beyond the returned k (hence they are underscores).

        Input: nums = [0,0,1,1,1,2,2,3,3,4]
        Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
        Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
        It does not matter what you leave beyond the returned k (hence they are underscores).
    */
    for(int i=0; i<numsSize- 1; i++) {
        if (nums[i] == nums[i+1] || nums[i] == nums[i-1]) {
            // delete that num
            for (int j = i; j < numsSize-1; j++) {
                nums[j] = nums[j+1];
            }
            numsSize--;
        }
    }
    return numsSize;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    /*
    Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, and you may not use the same element twice.

    You can return the answer in any order.

    Example 1:

    Input: nums = [2,7,11,15], target = 9
    Output: [0,1]
    Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
    Example 2:

    Input: nums = [3,2,4], target = 6
    Output: [1,2]
    Example 3:

    Input: nums = [3,3], target = 6
    Output: [0,1]
    */
   for (int i = 0; i < numsSize; i++) {
       for (int j = i + 1; j < numsSize; j++) {
           if(nums[i]+nums[j] == target) {
               int * ptr = (int*)malloc(sizeof(4*2));
               return ptr;
           }
       }
   }
}















int main() {
    clear();

    
    







    return 0;
}