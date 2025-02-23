// #include<iostream>
// using namespace std;
// // int add(int a, int b){
// // return a+b;
// //}

// int main(){
//     // //function pointer declaration: 
//     // int (*funcpoint)(int,int)=&add;
//     // int result = funcpoint(4,4);//calling function through pointer
//     // cout<<"Result: "<<result;
    
//     return 0;
// }
                            //*********** Caling function pointer indirectly***********
#include<iostream>
using namespace std;
float area(float b, float h){
    return b*h;
}
int main(){
    float(*funcpoint)(float,float);
    funcpoint=area;
    int result =funcpoint(5.67,2.4);
    cout<<"Area of rectangle:  "<<result;
    return 0;
}