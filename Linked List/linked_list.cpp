#include <iostream>
using namespace std;


struct node
{
    int data;
    node *next;
};

struct node *start = NULL;

//creating a node
struct node* create_node(){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return n;
}

//inserting values to node
void insert_node(){
    struct node *temp,*t;
    temp = create_node();
    cout<<"enter a number : "<<endl;
    cin >> temp->data;
    temp->next = NULL;

    if(start==NULL){
        start=temp;
    }
    else{
        t=start;
        while(t->next != NULL){
            t=t->next;
        }
        t->next = temp;
    }   
}

//deleting node
void delete_node(){
    struct node *remove;
    if(start==NULL){
        cout<<"You're trying to delete a value from an empty list!!"<<endl;
    }
    else{
        remove = start;
        start = start->next;
        free(remove);
    }
}

//linkedList traversal
void display_list(){
    struct node *travel;
    if(start == NULL){
        cout<<"List Empty"<<endl;
    }
    else{
        travel = start;
        while(travel != NULL){
            cout<< travel->data <<" ";
            travel = travel->next; 
        }
        cout<<endl;
    }
}

//diaplaying menu
int menu(){
    int ch;
    cout<<"1. Add item to the list"<<endl;
    cout<<"2. Delete item from the list"<<endl;
    cout<<"3. Display list"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Enter your choice : "<<endl;
    cin>>ch;

    return ch;
}

int main(){

    while(1){
        switch (menu())
        {
        case 1: insert_node();
            break;
        case 2: delete_node();
            break;
        case 3: display_list();
            break;
        case 4: exit(0);        
        default: cout<<"invalid entry"<<endl;
            break;
        }
    }
    
}