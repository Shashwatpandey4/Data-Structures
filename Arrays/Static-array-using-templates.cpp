#include <iostream>
using namespace std;

template<class X> class ArrayList{

    private :
     struct Controlblock{
        int capacity;
        X *array_pointer;
    };
    Controlblock *s;

    

    public:
     ArrayList(int cap){
          
          s = new Controlblock;
          s->capacity = cap;
          s->array_pointer = new X[s->capacity];
     }

     void insert(int index,X data){
         if(index>=0 && index<=s->capacity-1){
            s->array_pointer[index] = data;
         }
         else{
             cout<<"\n IndexOutOfBound !!!";
         }
        }
     void viewElement(int index, X &data){
         if(index>=0 && index<=s->capacity-1){
             data=s->array_pointer[index];
         }
         else{
             cout<<"\n Invaild Index !!!";
         }
     }
     void displayArray(){
         for(int i=0;i<s->capacity;i++){
             cout<<"|"<<s->array_pointer[i];
         }
     }
     

};


int main(){

    ArrayList <int>list1(4);
    list1.insert(0,34);
    list1.insert(1,91);
    list1.insert(2,93);
    list1.insert(3,89);
    list1.displayArray();
    
    return 0;
};
