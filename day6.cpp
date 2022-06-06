// Approach
// The idea is very intuitive, we can simply find the difference between the lengths of given linked lists and change the root or the head node of the longer list to this difference. Keep iterating the nodes till an intersection is encountered. If one of the nodes becomes NULL or nullptr, then there exists no intersection, return NULL, otherwise return node.

// Code
// C++ code for Intersection of Two Linked Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include<bits/stdc++.h>
using namespace std;
    
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // declaring integers to store the size of the linked lists
        int a=0, b=0;
        // to count the size of the linked list iterate through each node & increment size
        ListNode *currA = headA, *currB = headB;
        while(currA != NULL){
            currA = currA -> next;
            a++;
        }
        while(currB != NULL) {
            currB = currB->next;
            b++;
        }
        
        int k = abs(b-a);
        if ( b > a ) {
            //if the size of B > A, then b becomes b->next till the difference a-b becomes zero
            while(k--) {
                headB = headB -> next;
            }
        }
        else {
            //if the size of B < A, then a becomes a->next till the difference a-b becomes zero
            while(k--) {
                headA = headA -> next;
            }
        }
        
        // check if the headA and headB are equal, if not then move to next pointers of headA and headB
        while(headA != headB && headA->next != NULL && headB->next != NULL) {
            headA = headA -> next;
            headB = headB -> next;
        }
        
        // if one of the list becomes NULL and still no node is found common then return NULL
        if(headA != headB) return NULL;
        
        // if above statement is not true, then return the common node either headA or headB
        return headA;
    }
};