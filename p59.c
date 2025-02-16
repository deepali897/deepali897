
// C program to reverse a 
// stack using recursion 
#include <stdio.h> 
#include <stdlib.h> 
#define bool int 
  
// structure of a stack node 
struct sNode { 
    char data; 
    struct sNode* next; 
}; 
  
// Function Prototypes 
void push(struct sNode** top_ref, int new_data); 
int pop(struct sNode** top_ref); 
bool isEmpty(struct sNode* top); 
void print(struct sNode* top); 
  
// Below is a recursive function 
// that inserts an element 
// at the bottom of a stack. 
void insertAtBottom(struct sNode** top_ref, int item) 
{ 
    if (isEmpty(*top_ref)) 
        push(top_ref, item); 
    else { 
  
    
        int temp = pop(top_ref); 
        insertAtBottom(top_ref, item); 
  
    
        push(top_ref, temp); 
    } 
} 

void reverse(struct sNode** top_ref) 
{ 
    if (!isEmpty(*top_ref)) { 
        int temp = pop(top_ref); 
        reverse(top_ref); 
  
    
        insertAtBottom(top_ref, temp); 
    } 
} 
  

int main() 
{ 
    struct sNode* s = NULL; 
    push(&s, 4); 
    push(&s, 3); 
    push(&s, 2); 
    push(&s, 1); 
  
    printf(" Original Stack "); 
    print(s); 
    reverse(&s); 
    printf("Reversed Stack "); 
    print(s); 
    return 0; 
} 
  
// Function to check if 
// the stack is empty 
bool isEmpty(struct sNode* top) 
{ 
    return (top == NULL) ? 1 : 0; 
} 
  
void push(struct sNode** top_ref, int new_data) 
{ 
    struct sNode* new_node 
        = (struct sNode*)malloc(sizeof(struct sNode)); 
  
    if (new_node == NULL) { 
        printf("Stack overflow"); 
        exit(0); 
    } 
  
    // put in the data 
    new_node->data = new_data; 
  
    // link the old list 
    // off the new node 
    new_node->next = (*top_ref); 
  
    
    (*top_ref) = new_node; 
} 
  

int pop(struct sNode** top_ref) 
{ 
    char res; 
    struct sNode* top; 
  
    
    if (*top_ref == NULL) { 
        printf("Stack overflow"); 
        exit(0); 
    } 
    else { 
        top = *top_ref; 
        res = top->data; 
        *top_ref = top->next; 
        free(top); 
        return res; 
    } 
} 

void print(struct sNode* top) 
{ 
    printf(" "); 
    while (top != NULL) { 
        printf(" %d ", top->data); 
        top = top->next; 
    } 
}
