#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int,5> a = {123,234,23,532,52};
    array<int,5> b = {123,234,23,532,52};
    
    cout<<"using at(3) member function : "<<a.at(3)<<endl;
    cout<<"using [] member function : "<<a[1]<<endl;
    cout<<"using front() member function : "<<a.front()<<endl;
    cout<<"using back() member function : "<<a.back()<<endl;
    cout<<"using fill() member function : ";
    a.fill(10);
    for(int i=0;i<=4;i++)
        cout<<a[i]<<"|";

    cout<<""<<endl;
    cout<<"using swap() member function : "<<endl;
    cout<<"A : ";
    a.fill(10);
    for(int i=0;i<=4;i++)
        cout<<a[i]<<"|";
    cout<<""<<endl;
    cout<<"B : ";
    b.fill(7);
    for(int i=0;i<=4;i++)
        cout<<b[i]<<"|";
    cout<<""<<endl;
    cout<<"swapping now : "<<endl;
    a.swap(b);
    cout<<"A : ";
    for(int i=0;i<=4;i++)
        cout<<a[i]<<"|";
    cout<<""<<endl;
    cout<<"B : ";
    for(int i=0;i<=4;i++)
        cout<<b[i]<<"|";
    

}