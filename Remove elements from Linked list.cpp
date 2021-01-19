  
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
    ListNode** nhead=&head;
        
    while(*nhead!=NULL){
    if((*nhead)->val ==val)
    *nhead = (*nhead)->next;
            
    else
    nhead = &(*nhead)->next;
    }
        
    return head;
    }
};
