# Hash Table

## Code Example

### Hashing 
Convert key into ASCII. In this example, I convert the string into the sum of each characters ASCII value

```c++
int HashTable::ascii_sum(std::string key) const {
    int ascii = 0;

    for (char c : key) {
        ascii += static_cast<int>(c);
    }

    return ascii;
}
```

Turn the ASCII value into an index by performing a modulo operation `ascii_number % size_of_hash_table`

```c++
size_t HashTable::hash(std::string key) const {

    int ascii = ascii_sum(key);

    return ascii % size;
}
```
### Collision
Each element in the hash table array is a linked list. If there is an index collision during the hashing the key and value are added to the linked list. The is collision handling method is known as chaining. 


