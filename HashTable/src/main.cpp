#include <iostream>
#include "../includes/LinkedList.h"
#include "../includes/HashTable.h"

int main() {

    HashTable hash_table {10};

    hash_table.add("Bob", 38);
    hash_table.add("Jim", 28);
    hash_table.add("Jen", 45);

    std::cout << hash_table.find("Bob") << std::endl;
    std::cout << hash_table.find("Jim") << std::endl;
    std::cout << hash_table.find("Jen") << std::endl;
    std::cout << hash_table.find("Kyle") << std::endl;


    return 0;
}