//
//  main.cpp
//  zeroOneTwoList
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


ListNode<int> *op, *tp, *zp;
ListNode<int> o, t, z;

template <class Type>
Type * insert(Type *n, Type &s, Type *e){
    if(!e){
        s.next = n;
        e = n;
    }
    else{
        e->next = n;
        e = e->next;
    }
    return e;
        
}


template <class Type>
ListNode<Type> * sortZeroOneTwoList(ListNode<Type> * l) {
    
    if(l){
        while (l){
            ListNode<Type> *tmp = new ListNode<Type>(l->value);
            
            if (tmp->value < 1)
                zp = insert(tmp, z, zp);
            else if (tmp->value > 1)
                tp = insert(tmp, t, tp);
            else
                op = insert(tmp, o, op);
        
            l = l->next;
        }
        l = z.next;
        zp->next = o.next;
        op->next = t.next;
    }
    
    return l;
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

/* Main driver */

int main(int argc, const char * argv[]) {
    ListNode<int> *a1 = loadList(std::vector<int>{2, 1, 0});
    ListNode<int> *a2 = sortZeroOneTwoList(a1);
    printList(a2);
    
    ListNode<int> *b1 = loadList(std::vector<int>{0, 1, 0, 1, 2, 0});
    ListNode<int> *b2 = sortZeroOneTwoList(b1);
    printList(b2);
    
    ListNode<int> *c1 = loadList(std::vector<int>{2, 2, 2, 1, 1, 0, 2, 0, 0, 2});
    ListNode<int> *c2 = sortZeroOneTwoList(c1);
    printList(c2);
    
    ListNode<int> *d1 = loadList(std::vector<int>{});
    ListNode<int> *d2 = sortZeroOneTwoList(d1);
    printList(d2);
    
    return 0;
}
