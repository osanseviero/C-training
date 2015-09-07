
template <class T>
class Node
{
    private:
        T data;
        Node * next = nullptr;

    public:
        // Constructors
        Node () {};
        Node (T _data) { data = _data; }
        // Destructor
        ~Node ();

        // Access methods
        T getData();
        void setData(T _item);
        Node * getNext();
        void setNext(Node* _pointer);
};

template <class T>
T Node<T>::getData()
{
    return this->data;
}

template <class T>
void Node<T>::setData(T new_data)
{
    this->data = new_data;
}

template <class T>
Node<T> * Node<T>::getNext()
{
    return this->next;
}

template <class T>
void Node<T>::setNext(Node* next_node)
{
    this->next = next_node;
}

template <class T>
Node<T>::~Node()
{
    data.~T();
    next = nullptr;
}

