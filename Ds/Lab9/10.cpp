// 10. Write a structure to store the name, account number and balance of customers (more than 10) and store their information. 1 - Write a function to print the names of all the customers having balance less than $200.
//  2 - Write a function to add $100 in the balance of all the customers having more than $1000 in their balance and then print the incremented value of their balance.
 
 #include<bits/stdc++.h>
using namespace std;
struct customers{
    char na[10];
    int accn;
    int bal;
};
void lbal(struct customers c[],int n){
    for(int i=1;i<=n;i++){
        if(c[i].bal < 200)
            cout<<c[i].na;
    }
}
void hbal(struct customers c[],int n){
    for(int i=1;i<=n;i++){
        if(c[i].bal>1000){
            cout<<c[i].na<<endl;
            cout<<c[i].bal +100;
        }
    }
}
int main(){
    struct customers c[100];
    int n;
    cout<<"Enter the enteries: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the name: ";
        cin>>c[i].na;
        cout<<"Enter the account number: ";
        cin>>c[i].accn;
        cout<<"Enter the balance: ";
        cin>>c[i].bal;
        cout<<endl;
    }
    cout<<"Data of the customers is : "<<endl;
    for(int i=1;i<=n;i++){
        cout<<"Name of customer "<<i<<" is: "<<c[i].na<<endl;
        cout<<"Account number of customer "<<i<<" is: "<<c[i].accn<<endl;
        cout<<"Balance of customer "<<i<<" is: "<<c[i].bal<<endl;
    }
    cout<<endl;
    cout<<"Customers having bank balance less than $200 are: "<<endl;
    lbal(c,n); 
    cout<<endl;
    cout<<"Updated list after adding $100 in the balance of all the customers having more than $1000 in their balance is: "<<endl;
    hbal(c,n);

}