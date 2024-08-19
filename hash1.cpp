

#include "hash1.h"

using namespace std;

hash1::hash1()
{
    for (int i = 0; i < tableSize; i++)
    {
        HashTable[i] = new item;
        HashTable[i]->name = "empty";
        HashTable[i]->drink = "empty";
        HashTable[i]->next = NULL;
    }
}

void hash1::AddItem(string name, string drink)
{
    int index = Hash(name);
    if (HashTable[index]->name == "empty")
    {
        HashTable[index]->name = name;
        HashTable[index]->drink = drink;
    }
    else
    {
        item *Ptr = HashTable[index];
        item *n = new item;
        n->name = name;
        n->drink = drink;
        n->next = NULL;

        while (Ptr->next != NULL)
        {
            Ptr = Ptr->next;
        }
        Ptr->next = n;
    }
}

int hash1::Hash(string key)
{
    int hash = 0;
    int index;

    index = key.length();

    for (int i = 0; i < key.length(); i++)
    {
        hash += (int)key[i];
    }

    index = hash % tableSize;

    return index;
};

int hash1::NumberOfItemsInIndex(int index)
{
    int count = 0;

    item *Ptr = HashTable[index];

    if (Ptr->name == "empty")
    {
        return 0;
    }

    while (Ptr != NULL)
    {
        count++;
        Ptr = Ptr->next;
    }

    return count;
}