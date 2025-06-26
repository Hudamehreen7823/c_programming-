#include <stdio.h>
#include <stdlib.h>
// Define the structure for a node in the linked list
struct Node {
 int data;
 struct Node *next;
};
int main() 
{
 int n;
 // Input the number of elements in the linked list
 printf("Enter the number of elements: ");
 scanf("%d", &n);
 // Check if the number of elements is valid
 if (n <= 0) 
 {
 printf("Invalid input for the number of elements.\n");
 return 1;
 }
 // Create the head node of the linked list
 struct Node  *head = NULL;
 struct Node *current = NULL;
 // Input the data for each node and create the linked list
 for (int i = 0; i < n; i++) 
 {
 // Create a new node
 struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
 // Input data for the node
 printf("Enter data for node %d: ", i);
 scanf("%d", &newNode->data);
 // Set the next pointer of the current node
 if (current != NULL) 
 {
 current->next = newNode->data;
 }
 // Update the current node to the newly created node
 current = newNode;
 // If it's the first node, set it as the head
 if (head == NULL) 
 {
 head = current;
 }
 }
 // Display the linked list
 printf("Linked List: ");
 current = head;
 while (current != NULL) 
 {
 printf("%d -> ", current->data);
 current = current->next;
 }
 printf("NULL\n");
 // Free allocated memory
 current = head;
 while (current != NULL) 
 {
 struct Node  *temp = current;
 current = current->next;
 free(temp);
 }
 return 0;
}
