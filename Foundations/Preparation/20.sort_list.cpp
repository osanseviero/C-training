class Solution {
    public:
        ListNode *sortList(ListNode *head) {
            // If empty or just one element
            if (head == NULL || head->next == NULL)
                return head;

            // Finds the middle place for the mergesort
            ListNode *p1 = head;
            ListNode *p2 = head->next;

            while(p2 && p2->next) {
                p1 = p1->next;
                p2 = p2->next->next;
            }
            p2 = p1->next;
            p1->next = NULL;

            return mergeTwoLists(sortList(head), sortList(p2)); 
        }

        ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
            if(l1 == NULL) return l2;
            if(l2 == NULL) return l1;

            ListNode* head = NULL;    // head of the list to return

            // find first element 
            if(l1->val < l2->val) {
                head = l1;
                l1 = l1->next;
            } else {
                head = l2;
                l2 = l2->next;
            }

            ListNode* p = head;     // pointer to form new list

            while(l1 && l2){
                if(l1->val < l2->val) {
                    p->next = l1;
                    l1 = l1->next;
                } else {
                    p->next = l2;
                    l2 = l2->next;
                }
                p = p->next;
            }

            // add the rest of the tail, done!
            if (l1) {
                p->next=l1;
            } else {
                p->next=l2;
            }

            return head;
        }
};