#include<iostream>
using namespace std;
int add(int a, int b){
return a+b;
}
int main(){
    //function pointer declaration: 
    int (*funcpoint)(int,int)=&add;
    int result = funcpoint(4,4);
    cout<<"Result: "<<result;
    return 0;
}
