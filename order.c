#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define CACHE_SIZE 5
struct CacheNode 
{
 int key;
 int value;
 struct CacheNode* next;
};
struct HashTable 
{
 struct CacheNode* table[CACHE_SIZE];
};
struct CacheNode* createCacheNode(int key, int value) 
{
 struct CacheNode* newNode = (struct CacheNode*)malloc(sizeof(struct CacheNode));
 if (newNode != NULL) 
 {
 newNode->key = key;
 newNode->value = value;
 newNode->next = NULL;
 }
 return newNode;
}
struct HashTable* createHashTable() 
{
 struct HashTable* hashTable = (struct HashTable*)malloc(sizeof(struct HashTable));
 for (int i = 0; i < CACHE_SIZE; ++i) 
 {
 hashTable->table[i] = NULL;
 }
 return hashTable;
}
int hashFunction(int key) 
{
 return key % CACHE_SIZE;
}
struct CacheNode* search(struct HashTable* hashTable, int key) 
{
 int index = hashFunction(key);
 struct CacheNode* temp = hashTable->table[index];
 while (temp != NULL) 
 {
 if (temp->key == key) 
 {
 return temp;
 }
 temp = temp->next;
 }
 return NULL;
}
void insert(struct HashTable* hashTable, int key, int value) 
{
 int index = hashFunction(key);
 struct CacheNode* newNode = createCacheNode(key, value);
 if (newNode == NULL) 
 {
 printf("Memory allocation failed. Unable to insert element.\n");
 return;
 }
 newNode->next = hashTable->table[index];
 hashTable->table[index] = newNode;
}
void display(struct HashTable* hashTable) 
{
 for (int i = 0; i < CACHE_SIZE; ++i) 
{
 printf("Index %d:", i);
 struct CacheNode* temp = hashTable->table[i];
 while (temp != NULL) 
 {
 printf(" -> (%d, %d)", temp->key, temp->value);
 temp = temp->next;
 }
 printf("\n");
 }
}
int main() 
{
 struct HashTable* cache = createHashTable();
 insert(cache, 1, 10);
 insert(cache, 2, 20);
 insert(cache, 3, 30);
 insert(cache, 4, 40);
 insert(cache, 5, 50);
 insert(cache, 6, 60); 
 printf("Cache contents:\n");
 display(cache);
 
 int key = 3;
 struct CacheNode* foundNode = search(cache, key);
 if (foundNode != NULL) 
 {
 printf("Key %d found with value %d.\n", key, foundNode->value);
 } 
 else 
 {
 printf("Key %d not found.\n", key);
 }
 return 0;
}
