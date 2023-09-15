/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr || left == right) return head;
        ListNode* dummy = head;
        vector<int> arr;
        int count = 1;
        while(count<=right){
            if(count>=left && count<=right){
                arr.push_back(dummy->val);
            }
            count++;
            dummy = dummy->next;
        }
        reverse(arr.begin(),arr.end());
        // for(int i=0;i<arr.size();i++){
        //     cout<<arr[i];
        // }
        count = 1;
        int i = 0;
        dummy = head;
        while(count<=right){
            if(count>=left && count<=right){
                dummy->val = arr[i];
                i++;
            }
            count++;
            dummy = dummy->next;
        }
        dummy = head;
        return dummy;
    }
};
