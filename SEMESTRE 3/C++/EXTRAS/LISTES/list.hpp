#ifndef __LIST_HPP__
    #define __LIST_HPP__
    #include <iostream>
    template <typename T>

    class liste
    {
    private:
        struct node
        {
            T value;
            node* next;
            node* prev;
            node(T val) : value(val), next(nullptr), prev(nullptr){}
        };
        
        node *head;

    public:
        liste() : head(nullptr){}
       

        bool empty(){
            return head == nullptr;
        }

        void push_front(T val){
            node* newNode = new node(val);

            if (empty())
            {
                head = newNode;
                return;
            }
            newNode->next = head;
            head->prev = newNode;
            head = newNode;            
        }

        void push_back(T val){
             node* newNode = new node(val);

            if (empty())
            {
                head = newNode;
                return;
            }

            node* temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
            
        }

        void display(){
            if (empty())
            {
                std::cout << "Liste vide" << std::endl;
            }

            node* temp = head;
            while (temp != nullptr)
            {
                std::cout << temp->value << " -> ";
                temp = temp->next;
            }
            std::cout  << std::endl;           
        }
    };
    
  
    

#endif // !__LIST_HPP__