#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_

#include <iostream>
#include <string>
#include "LinkedList.h"

class HashTable {
public:
    LinkedList *hash_table;
    size_t size;

    HashTable(size_t size);
    ~HashTable();

    void add(std::string key, int value);
    int find(std::string key) const;
    size_t hash(std::string key) const;
    int ascii_sequence(std::string) const;
    int ascii_sum(std::string key) const;
};

#endif