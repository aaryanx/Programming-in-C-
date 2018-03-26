/*Reverse a linked list from position m to n. Do it in-place and in one-pass.

For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,

return 1->4->3->2->5->NULL.

 Note:
Given m, n satisfy the following condition:
1 ≤ m ≤ n ≤ length of list. Note 2:
Usually the version often seen in the interviews is reversing the whole linked list which is obviously an easier version of this question. */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::reverseBetween(ListNode* A, int m, int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

        ListNode* next, *current, * prev, * start, *sprev;
        current= A;
        prev=NULL;
        sprev=NULL;
        int c=1;
        while(c<m){
            sprev=current;
            current=current->next;
            start= current;
            c++;
        }
        c++;
        prev=current;
        start=current;
        current=current->next;
        while(c<=n){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            c++;
        }
        if(sprev==NULL){
            A=prev;
        }
        else{
            sprev->next=prev;
        }
        start->next=current;
        
    return A;
}
