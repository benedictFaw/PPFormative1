#include "perimeter.h"

ull perimeter(int n) {
  int perimeter = 0;
  if(n == 0){
    perimeter = 4;
  }
  else{
    int nums[n+1];
    nums[0] = 1;
    nums[1] = 1;
    for( int x =2; x <= n+1 ; x++){
      nums[x] = nums[x-1] + nums[x-2];
    }
    for(int loop = 0; loop < 10; loop++){
    } 
    int size = (sizeof(nums))/(sizeof(nums[0]));
    for( int j=0; j < size; j ++){
      perimeter = perimeter + 4*(nums[j]);
    }
  }
  
  return perimeter;
}
