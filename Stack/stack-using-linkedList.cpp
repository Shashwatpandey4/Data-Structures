#include <iostream>
using namespace std;


struct node
{
    int data;
    node *next;
};

//find peek
int peek(struct node **s){
    if(*s == NULL){
        cout<<"Stack Empty !!"<<endl;
        return 0;
    }else{
        return(*s)->data;
    }
}

//creating a node
struct node* create_node(){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}

//pushing an element into the stack
void push(struct node **s,int element){
    struct node *n;
    n = create_node();
    if(n!=NULL)
     {n->data = element;
        n->next = *s;
        *s = n;
    }
   }

//popping an element out of the stack
int pop(struct node **s){
    int item;
    struct node *remove;
    if(*s == NULL){
        cout<<"Stack Underflow"<<endl;
        return 0;
    }else{
        item = (*s)->data;
        remove = *s;
        *s = remove->next;
        free(remove);
        return item;
    }
}

//remove stack
void remove_stack(struct node **s){
    while(*s != NULL){
        pop(s);
    }
}

int main(){
    struct node *stack;
    push(&stack,10);
    push(&stack,20);
    push(&stack,30);
    push(&stack,40);
    push(&stack,50);

    cout<< peek(&stack)<<endl;
    cout<< pop(&stack)<<endl;
    cout<< peek(&stack)<<endl;
    remove_stack(&stack);

}