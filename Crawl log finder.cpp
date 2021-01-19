class Solution {
public:
    int minOperations(vector<string>& logs) {
        
      stack<int> s;
      s.push(0);
      
   for(string st: logs) {
         
   if(st=="../") { 

   if(s.top()!=0) s.pop();    
   } else if(st=="./"){}
   else {

   int t=s.top()+1;
   s.push(t);   
   }      
   }       
       return s.top();    
   }
};
