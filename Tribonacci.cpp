class Solution {
public:

  int tribonacci(int n) {   
  
    int arr[38];
    arr[0]=0; arr[1]=1;  arr[2]=1;
      
    deque<int> dq;
    deque<int>  d;

    dq.push_back(0);
    dq.push_back(1);
    dq.push_back(1);
        
   for(int i=3; i<=n; i++){
       
    int sum=0;    
    while(!dq.empty()) {
        
       sum+=dq.front(); 
       d.push_back(dq.front());
       dq.pop_front();
        
    }
       d.pop_front();
       
    while(!d.empty()){
       
       dq.push_back(d.front());
       d.pop_front();
        
     }  
       dq.push_back(sum);
       
       arr[i]=sum;
       
   }
       return arr[n];     
   }
};
