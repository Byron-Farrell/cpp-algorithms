#ifndef _HASH_TABLE_H_
#define _HASH_TABLE_H_


#include <string>
#include "LinkedList.h"

template <class T>
class HashTable {
public:
    LinkedList<T> *hash_table;
    size_t size;

    HashTable(size_t size);
    ~HashTable();

    void add(std::string key, T value);
    void set(std::string key, T value);
    T get(std::string key) const;
    bool exists(std::string key) const;
private:
    int string_ascii_sum(std::string key) const;
    size_t hash(std::string key) const;
};


#endif