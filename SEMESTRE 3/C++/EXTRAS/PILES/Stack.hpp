#include <iostream>
#include <string> 
#include <cstdlib>



template <typename T>

struct node
{
    T value;
    node<T>* next;
    node(T val) : value(val), next(nullptr){}
};

template <typename T>

class Stack
{
private:
    node<T>* head;
public:
    Stack() : head(nullptr){}
    
   
    bool is_empty() {
        return (head == nullptr);
    }
    
    
    void empiler(T val){
        node<T>* newNode = new node<T>(val);

        if(is_empty()){
            head = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
    }

    void depiler(){

        if (is_empty())
        {
            std::cout << "pile vide";
            return;
        }

        if(head->next == nullptr){
            delete head;
            head = nullptr;
            return;
        } 

        node<T>* temp =  head;
        head = head->next;
        delete temp;
        
    }

    void display(){
       
        if(is_empty()) {
            std::cout << "pile vide";
            return;
        }

        node<T> *temp = head;
        while (temp != nullptr)
        {
            std::cout << temp->value << " -> ";
            temp = temp->next;
        }
    }
};



