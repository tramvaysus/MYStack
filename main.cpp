#include <iostream>

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int _data) : data(_data) {}
};


class Stack 
{
public: 
    Node* head;
    Stack()
    {
        this->head = NULL;
    }

    void add(int _value)
        {
            Node* newNode = new Node(_value);
            newNode->next = head;
            head = newNode;
        }

    void delete_el()
    {
        if (head == NULL)
        {
            std::cout << "Мы не можем удалить элемент, так как стек пустой.\n";
        }
        else
        {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void show_all()
        {
        if (head == NULL)
        {
            std::cout << "Мы не можем вывести элементы, так как стек пустой.\n";
        }
        else
        {
            Node* tmp_node = head;
            while (tmp_node != NULL)
            {
                std::cout << tmp_node->data << " ";
                tmp_node = tmp_node->next;
            }
            std::cout << std::endl;
        }
      }
    void show_head()
    {
        if (head == NULL)
        {
            std::cout << "Мы не можем вывести элемент, так как стек пустой.\n";
        }
        else
        {
            std::cout << head->data;
        }
    }
};
int main()
{
    setlocale(0, "");

    Stack stack;

    stack.add(1);
    stack.add(2);
    stack.add(3);

    stack.delete_el();
    stack.show_all();
    stack.show_head();
}

