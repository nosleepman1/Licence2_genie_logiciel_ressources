#ifndef __FILE_HPP__
    #define __FILE_HPP__

    template <typename T>

    class queue
    {
    private:
        struct node
        {
            T value;
            node* next;
            node(T val) : value(val), next(nullptr){}
        };
        
        node *first;
        
    public:
        queue() : first(nullptr){}
        
        bool is_empty(){
            return first == nullptr;
        }

        void enqueue(T val){
            node *newNode = new node(val);

            if (is_empty())
            {
                first  = newNode;
                return;
            }

            node* temp = first;
            while (temp->next != nullptr)
            { 
                temp = temp->next;
            }
            

            temp->next = newNode;
        }

        void dequeue(){
            node* temp = first;
            first = first->next;
            delete temp;
        }

        void display(){
            if (is_empty())
            {
                std::cout << "file vide" << std::endl;
            }

            node* temp = first;
            while (temp != nullptr)
            {
                std::cout << temp->value << "  ->  " ;
                temp = temp->next;
            }
            std::cout << std::endl;
        }
        
    };
    
  

#endif // !__FILE_HPP__