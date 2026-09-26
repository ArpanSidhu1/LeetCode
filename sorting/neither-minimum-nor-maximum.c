int findNonMinOrMax(int* nums, int numsSize){
    int i,min=0,max=0;
    min = nums[0];
    max = nums[0];
    for(i=0; i<numsSize; i++)
     {
        min = (min <= nums[i]) ? min : nums[i];
        max = (max >= nums[i]) ? max : nums[i];
      }
      for(i=0; i<numsSize; i++){
           if(nums[i]!=max && nums[i]!=min){
                return nums[i];
                }
       }    
      return -1; 
     }