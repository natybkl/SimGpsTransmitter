class Solution {
public:

 vector<int> frequencySort(vector<int>& nums) {
    
    unordered_map<int,int> um;
    
    for(int k: nums) 
    um[k]+=1; 
         
sort(nums.begin(),nums.end(),[&](const auto &e1,const auto &e2){
      
if(um[e1]==um[e2]) return e1>e2; else return um[e1]<um[e2];
      
  }); //sort nums with respect to the frequency of each distinct eleme 
       
   return nums;
        
 }
};
