//solution 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        if(nums.size()==1)
           return;
        int i=0,j=1;
        while(j!=nums.size())
        {
            if(nums[i]==0 && nums[j]==0)
               j++;
            else if((nums[i]!=0 && nums[j]==0) || (nums[i]!=0 && nums[j]!=0))
            {
              i++;
              j++;
            }
            else
              {
                  swap(nums[i],nums[j]);
                  if(j-i>1)
                    i++;
                  else
                    {
                        i++;
                        j++;
                    }
              }
        }
        
    }
};


//solution 2
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        
        int n = arr.size();
        int j = -1;

        for(int i = 0; i<n-1; i++){
            if(arr[i] == 0){
                j = i;
                break;
            }
        }

        if(j != -1){

            for(int i = j+1; i<n; i++){

                if(arr[i] != 0){
                    swap(arr[i], arr[j]);
                    j++;
                }
            }
        }
    }
};
