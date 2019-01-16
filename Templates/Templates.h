#pragma once


// Stack 

template<class T>
class Stack 
{
	struct CNode {
		T		Data;
		CNode*	pNext;
	};

private:
	CNode*	m_pRoot;

public:
	bool Push(T const&);
	T Pop();
	bool Empty();

	Stack();
	virtual ~Stack();
};

template<class T>
Stack<T>::Stack()
{
	m_pRoot = nullptr;
}

template<class T>
Stack<T>::~Stack()
{
	CNode* pNode = m_pRoot;
	while (pNode != nullptr) {
		CNode* pTemp = pNode;
		pNode = pNode->pNext;
		delete pTemp;
	}
}

template<class T>
bool Stack<T>::Push(T const& NewItem)
{
	CNode* pNode = new CNode();
	if (!pNode)
		return false;
	pNode->Data = NewItem;
	pNode->pNext = m_pRoot;
	m_pRoot = pNode;
	return true;
}

template<class T>
T Stack<T>::Pop()
{
	if (m_pRoot == nullptr)
		return -1;
	
	CNode* pNode = m_pRoot;
	m_pRoot = pNode->pNext;
	T Data = pNode->Data;
	delete pNode;

	return Data;
}

template<class T>
bool Stack<T>::Empty()
{
	if (!m_pRoot)
		return true;

	return false;
}