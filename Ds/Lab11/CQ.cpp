// CIRCULAR QUEUE

#include<bits/stdc++.h>
using namespace std;
# define size 10 
struct CQueue{
    int items[size];
    int Rear;
    int Front;
};
struct CQueue CQ;
void Initialize(){
    CQ.Front=0;
    CQ.Rear=0;
}
void insert(int x){
    if((CQ.Rear+1)%size == CQ.Front){
        cout<<"Queue Overflows";
        exit(1);
    }
    CQ.Rear=(CQ.Rear+1) % size;
    CQ.items[CQ.Rear]=x;
}
int deletion(){
    int x;
    if(CQ.Rear==CQ.Front){
        cout<<"Queue Underflows";
        exit(1);
    }
    CQ.Front=(CQ.Front+1) % size;
    x=CQ.items[CQ.Front];
    return x;
}
void display(){
    for(int i=CQ.Front+1;i<=CQ.Rear;i++){
        cout<<CQ.items[i]<<" ";
    }
    cout<<endl;
}
int main(){
    Initialize();
    //insert(0);
    insert(2);
    insert(4);
    insert(6);
    insert(8);
    insert(10);
    insert(12);
    display();
    cout<<deletion();
}