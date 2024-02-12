#include <iostream>
#include <string>
#include "../includes/HashTable.h"
#include "../includes/Graph.h"

template <class T>
HashTable<T>::HashTable(size_t size) : size {size} {
    hash_table = new LinkedList<T>[size] {};
}

template <class T>
HashTable<T>::~HashTable() {
    delete [] hash_table;
}

template <class T>
int HashTable<T>::string_ascii_sum(std::string key) const {
    int sum {0};

    for (char c : key) {
        sum += static_cast<int>(c);
    }

    return sum;
};

template <class T>
size_t HashTable<T>::hash(std::string key) const {
    int ascii_sum = string_ascii_sum(key);

    return static_cast<size_t>(ascii_sum) % size;
}

template <class T>
void HashTable<T>::add(std::string key, T value) {
    size_t index = hash(key);

    hash_table[index].add(key, value);
}

template <class T>
T HashTable<T>::get(std::string key) const {
    size_t index = hash(key);

    return hash_table[index].search(key)->value;
}

template <class T>
bool HashTable<T>::exists(std::string key) const {
    size_t index = hash(key);

    return hash_table[index].exists(key);
}

template <class T>
void HashTable<T>::set(std::string key, T value) {
    size_t index = hash(key);

    hash_table[index].search(key)->value = value;
}

template class HashTable<int>;
template class HashTable<Vertex*>;