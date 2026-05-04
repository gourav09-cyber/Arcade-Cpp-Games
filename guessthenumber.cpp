#include<iostream>
using namespace std;
int main(){
    int n = 39;
    int a;
    int t = 0;
    while(a != n){
    cout<<endl<<"Guess the number: ";
    cin>>a;
    if(a<n) cout<<"Number is greater than "<<a<<endl;
    else if(a>n) cout<<"Number is smaller than "<<a<<endl;
    else cout<<"You guessed it!!"<<endl;
    t++;
    }
    cout<<"You took "<<t<<" times to guess it!!"<<endl;
    return 0;
}