#pragma once

template <typename T>
class LinkedList{

      private:
      class Node{
        public:
        T value;
        Node* next;
        Node(T value);
    };
    Node* head;

    public:

    void push_back(T value);
    T pop();
    
    
  
};



#include "LinkedList.tpp"