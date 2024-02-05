#include <iostream>
#include <string>
#include "../includes/HashTable.h"


HashTable::HashTable(size_t size) : size {size} {
    hash_table = new LinkedList[size];
}

HashTable::~HashTable() {
    delete [] hash_table;
}

int HashTable::ascii_sequence(std::string key) const {

    int string_ascii = 0;

    for (char c : key) {
        int character_ascii = static_cast<int>(c);

        if (string_ascii == 0) {
            string_ascii = character_ascii;
        }
        else {
            float multiplier = 10.0;

            while (character_ascii / multiplier < 10.0) {
                multiplier *= 10;
            }

            string_ascii *= multiplier;
            string_ascii += character_ascii;
        }
    }

    return string_ascii;
}

int HashTable::ascii_sum(std::string key) const {
    int ascii = 0;

    for (char c : key) {
        ascii += static_cast<int>(c);
    }

    return ascii;
}

size_t HashTable::hash(std::string key) const {

    int ascii = ascii_sum(key);

    return ascii % size;
}

void HashTable::add(std::string key, int value) {
    size_t index = hash(key);

    hash_table[index].add(key, value);
}

int HashTable::find(std::string key) const {
    size_t index = hash(key);

    Node *node = hash_table[index].search(key);

    if (node == nullptr) {
        return -1;
    }

    return node->value;
}
