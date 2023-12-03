#include <iostream>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Your Solution class goes here...
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        if (head == nullptr || head->next == nullptr) { 
            return head;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;
        
        // Using slow and fast pointers to find the middle node
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return slow;
    }
};


// Function to print the linked list
void printLinkedList(ListNode *head) {
    ListNode *temp = head;
    while (temp != nullptr) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}

int main() {
    // Create a sample linked list
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    std::cout << "Original linked list: ";
    printLinkedList(head);

    // Find the middle node
    Solution solution;
    ListNode *middle = solution.middleNode(head);

    std::cout << "Middle node value: " << middle->val << std::endl;

    return 0;
}
