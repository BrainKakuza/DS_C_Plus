#include <iostream>
#include <array>

/*
    The goal of this question is for you to create a array class and down there is
    what function should be included
    - Add
    - Remove at each specific index
    - Print
    - If the new item is added/remove we have to change the size of correspond to the member we have
    - Find index of an item

*/

class Array
{
private:
    int *box, size, index;

    void reSize(bool command)
    {
        if (command)
        {
            int *temp = new int[size + 1];

            for (int i = 0; i < index; i++)
            {
                temp[i] = box[i];
            }

            delete[] box;

            box = temp;

            size++;
        }
        else
        {
            int *temp = new int[size - 1];

            for (int i = 0; i < index; i++)
            {
                temp[i] = box[i];
            }

            delete[] box;

            box = temp;

            size--;
        }
    }

public:
    Array() : size(0), index(-1)
    {
        box = new int[0];
    }

    Array(int s) : size(s), index(-1)
    {
        box = new int[s];
    }

    void insert(int num)
    {
        if (index + 1 == size)
        {
            reSize(1);
            insert(num);
        }
        else
        {
            index++;
            box[index] = num;
        }
    }

    void remove(int num)
    {
        if (index + 1 == size)
        {
            reSize(1);
            insert(num);
        }
        else
        {
            index++;
            box[index] = num;
        }
    }
};

int main(void)
{
    return 0;
}