#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    #define newline "\n";
    short int x = 32768;
    
    cout<<setw(8)<<setfill('*')<<x<<newline;
    return 0; 
}