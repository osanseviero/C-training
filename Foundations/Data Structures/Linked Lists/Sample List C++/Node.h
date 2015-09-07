template <class T>
class Node
{
	private:
		T data;
		Node * next = nullptr;
	public:
		// Constructor
		Node(){};
		Node(T _data){ data = _data;}

		// Destructor
		Node ();

		// Getter and setter
		T getData();
		void setData(T _item)
		Node * getNext();
		void setNext(Node* _pointer);
};
