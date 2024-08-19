
#ifndef HASH_H
#define HASH_H
#include <iostream>
#include <string>

using namespace std;

class hash1
{
private:
    static const int tableSize = 100;

    struct item
    {
        string name;
        string drink;
        item *next;
    };

    item *HashTable[tableSize];

public:
    hash1();
    int Hash(string key);
    void AddItem(string name, string drink);
    int NumberOfItemsInIndex(int index);
    void dele_hash(item *head)
    {
        while (head != NULL)
        {
            item *temp = head;
            head = head->next;
            delete temp;
        }
    }
    ~hash1()
    {
        for (int i = 0; i < tableSize; i++)
        {
            dele_hash(HashTable[i]);
        }
    }
};

#endif