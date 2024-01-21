#include <iostream>
using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    for(int i=2; i<=num/2; ++i){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int value;
    do{
        cout<<"Enter a Positive Integer:"<<endl;
        cin>>value;
    }while(value<0);
    if(isPrime(value)){
        cout<<value<<" is a prime number"<<endl;
    }else{
        cout<<value<<" is not a prime number"<<endl;
    }

}