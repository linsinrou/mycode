#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    int x[2];
    char a;
    Stack<char> y;
    for (int i = 0; i < 9; i++)
    {
        cin >> a;
        y.push(a);
    }
    for (int i = 0; i < 4; i++)
    {
        int total = 0;
        x[0] = y.pop() - 48;
        a = y.pop();
        x[1] = y.pop() - 48;
        if (a == '+')
        {
            total = x[1] + x[0];
            cout << total << endl ;
        }
        else if (a == '-')
        {
            total = x[1] - x[0];
            cout << total << endl;
        }
        else if (a == '*')
        {
            total = x[1] * x[0];
            cout << total << endl;
        }
        else if (a == '/')
        {
            total = x[1] / x[0];
            cout << total << endl;
        }
        a = total + '0';
        y.push(a);
        
    }
    
    return 0;
}




/*
�����A�Х��NStack�אּtemplate�Φ����ǦU�ث��O�A�A�Q�Φ����O�A�����N�r��push��Stack�]�H�r���B�z�^�A�M���pop��X�A�åH�������Ÿ��B��A�M��N���Gpush�^Stack�C

��J�����G
��J9�Ӧr��push��Stack�A�䤤�]�t�Ʀr�r���P�B��Ÿ��r���C

��X�����G
��pop��X�T�Ӧr����A�H�������Ÿ��B��A�ñN���Gpush�^Stack�C���Ʀ��ʧ@����⦡�����A�̫�Ʀr�����G�C

�d�ҿ�J�G
7-9/9-3*2

�d�ҿ�X�G
6
3
3
4




#ifndef STACK_H
#define STACK_H

class Stack
{
public:
    Stack();
    Stack(const Stack &);
    ~Stack();
    bool empty() const;
    int peek() const;
    void push(int value);
    int pop();
    int getSize() const;

private:
    int *elements;
    int size;
    int capacity;
    void ensureCapacity();
};

Stack::Stack() : size(0), capacity(16)
{
    elements = new int[capacity];
}

Stack::Stack(const Stack &stack)
{
    elements = new int[stack.capacity];
    size = stack.size;
    capacity = stack.capacity;
    for (int i = 0; i < size; i++)
    {
        elements[i] = stack.elements[i];
    }
}

Stack::~Stack()
{
    delete[] elements;
}

bool Stack::empty() const
{
    return (size == 0);
}

int Stack::peek() const
{
    return elements[size - 1];
}

void Stack::push(int value)
{
    ensureCapacity();
    elements[size++] = value;
}

void Stack::ensureCapacity()
{
    if (size >= capacity)
    {
        int *old = elements;
        capacity = 2 * size;
        elements = new int[size * 2];

        for (int i = 0; i < size; i++)
            elements[i] = old[i];

        delete[] old;
    }
}

int Stack::pop()
{
    return elements[--size];
}

int Stack::getSize() const
{
    return size;
}

#endif
*/