// LINEAR QUEUE

#include<iostream>
using namespace std;
#define size 10
struct queue
{
    int a[10];
    int f;
    int r;
};
struct queue q;

void initialize(){
    q.f=0;
    q.r=-1;
}
int isempty(){
    if(q.r - q.f +1 == 0){
        return true;
    }
    else
        return false;
}
void insert(int x){
    if(q.r==size-1){
        cout<<"Queue oveflow";
        exit(1);
    }
    else{
        q.r+=1;
        q.a[q.r]=x;
    }
}
int deletion(){
    if(isempty()){
        cout<<"Queue underflows";
        exit(1);
    }
    else{
        int x=q.a[q.f];
        q.f+=1;
        return x;
    }
}
void display(){
    for(int i=q.f;i<=q.r;i++){
        cout<<q.a[i]<<" ";
    }
    cout<<endl;
}


int main(){
    initialize();
    insert(20);
    insert(24);
    insert(55);
    insert(25);
    int y=deletion();
    cout<<y<<endl;
    display();
}