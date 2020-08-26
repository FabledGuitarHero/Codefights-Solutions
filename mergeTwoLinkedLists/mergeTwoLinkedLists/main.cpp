//
//  main.cpp
//  mergeTwoLinkedLists
//
//  Created by Nate Henderson on 8/22/20.
//  Copyright © 2020 Nate Henderson. All rights reserved.
//

#include <iostream>
#include <vector>

template<typename T>
struct ListNode {
     ListNode() : value(NULL), next(nullptr) {}
     ListNode(const T &v) : value(v), next(nullptr) {}
     T value;
     ListNode *next;
};


ListNode<int> * mergeTwoLinkedLists(ListNode<int> * l1, ListNode<int> * l2) {
    ListNode<int> h;
    ListNode<int> *p1 = l1, *p2 = l2, *t = &h;
    
    
    while (1){
        if (!p1){
            t->next = p2;
            break;
        }
        if (!p2){
            t->next = p1;
            break;
        }
        
        if(p1->value < p2 ->value){
            t->next = p1;
            p1 = p1->next;
        }
        else{
            t->next = p2;
            p2 = p2->next;
        }
        t = t->next;
        t->next = NULL;
    }
    
    return h.next;
}


/*Helper functions to load lists and print lists*/
ListNode<int>* loadList(std::vector<int> num){
    ListNode<int> temp;
    ListNode<int> *head = &temp;
    
    for (auto i : num){
        ListNode<int> *t = new ListNode<int>(i);
        head->next = t;
        head = head->next;
    }
    
    return temp.next;
}


void printList(ListNode<int>* node){
    while (node){
        std::cout << node->value << ", ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    ListNode<int> *a1 = loadList(std::vector<int>{1,2,3});
    ListNode<int> *a2 = loadList(std::vector<int>{4,5,6});
    ListNode<int> *a3 = mergeTwoLinkedLists(a1, a2);
    printList(a3);
    
    ListNode<int> *b1 = loadList(std::vector<int>{1, 1, 2, 4});
    ListNode<int> *b2 = loadList(std::vector<int>{0, 3, 5});
    ListNode<int> *b3 = mergeTwoLinkedLists(b1, b2);
    printList(b3);
    
    ListNode<int> *c1 = loadList(std::vector<int>{5, 10, 15, 40});
    ListNode<int> *c2 = loadList(std::vector<int>{2, 3, 20});
    ListNode<int> *c3 = mergeTwoLinkedLists(c1, c2);
    printList(c3);
    
    ListNode<int> *d1 = loadList(std::vector<int>{});
    ListNode<int> *d2 = loadList(std::vector<int>{1, 1, 2, 2, 4, 7, 7, 8});
    ListNode<int> *d3 = mergeTwoLinkedLists(d1, d2);
    printList(d3);
    
    ListNode<int> *e1 = loadList(std::vector<int>{});
    ListNode<int> *e2 = loadList(std::vector<int>{});
    ListNode<int> *e3 = mergeTwoLinkedLists(e1, e2);
    printList(e3);
    
    return 0;
}
