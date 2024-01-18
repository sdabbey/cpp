#include <iostream> 
using namespace std;
bool checkAge(int age){
     if(age >= 18 && age <=70){
          return true;
     }
     return false;
}
int main(){
   int clientAge;
   
   cout << "Welcome to Nii's Avenue Club!"<<endl;
   cout << "Please enter your age:";
   cin >> clientAge;
   
   try{
     if(checkAge(clientAge)){
          cout<< "Congratulations! You are eligible for entry."<<endl;
          cout<<"Please enter"<<endl;
     }else{
          cout<<"Your age is not in the acceptable range for entry."<<endl;
     }
   }
   catch(const char* errorMessage){
     cerr<<"Error:"<<errorMessage<<endl;
   }
   
   return 0;
}




