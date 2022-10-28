#include "perimeter.h"

ull perimeter(int n) {
  int perimeter = 0;
  if(n == 0){
    perimeter = 4; //return simple value for when there is only one square as no sequence needs to be calculated
  }
  else{
    int nums[n+1]; //hold the size of each square 
    nums[0] = 1; 
    nums[1] = 1;

    for( int x =2; x <= n+1 ; x++){
      nums[x] = nums[x-1] + nums[x-2]; //calculate fibbonachi sequnce 
    }

    int size = (sizeof(nums))/(sizeof(nums[0]));

    for( int j=0; j < size; j ++){ //calulate perimeter of each square and add all togther
      perimeter = perimeter + 4*(nums[j]);
    }
  }
  
  return perimeter;
}
