#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

struct node {
    int key;
    int value;
    struct node* next;
};

struct node* hash_table[SIZE];

int hash_function(int key) {
    return key % SIZE;
}

void insert(int key, int value) {
    int index = hash_function(key);
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->key = key;
    new_node->value = value;
    new_node->next = NULL;
    
    if (hash_table[index] == NULL) {
        hash_table[index] = new_node;
    } else {
        struct node* current = hash_table[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
}

int search(int key) {
    int index = hash_function(key);
    
    if (hash_table[index] == NULL) {
        return -1;
    } else {
        struct node* current = hash_table[index];
        while (current != NULL) {
            if (current->key == key) {
                return current->value;
            }
            current = current->next;
        }
    }
    
    return -1;
}

void display() {
    for (int i = 0; i < SIZE; i++) {
        printf("Bucket %d: ", i);
        struct node* current = hash_table[i];
        while (current != NULL) {
            printf("(%d, %d) -> ", current->key, current->value);
            current = current->next;
        }
        printf("NULL");
    }
}

int main() {
    for (int i = 0; i < SIZE; i++) {
        hash_table[i] = NULL;
    }
    
    insert(1, 10);
    insert(11, 20);
    insert(21, 30);
    insert(2, 40);
    
    display();
    
    printf("Value corresponding to key 11: %d", search(11));
    
    return 0;
}
