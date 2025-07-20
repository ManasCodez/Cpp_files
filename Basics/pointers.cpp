#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     int a =10;
//     int* ptr =&a;   
    
//     int** ptr2=&ptr;
//     cout << **ptr2;
// }




// int main(){
//     int* a = NULL;
//     cout << a;
// }




//pointer (pass by reference)
// void change(int* ptr){
//     *ptr=20;
// }

// int main(){
//     int a=10;
//     change(&a);
//     cout << a;
// }



// int main(){
//     int arr[]={0,2,3,4};
//     cout << *arr << endl;
    
// }

// int main(){
//     int arr[]={1,2,3,4};
    
//     for(int i=0; i<4 ; i++){
//         cout << *(arr+i) << endl;
//     }
// }




// int main(){
//     int a=10;
//     int* ptr =&a;
//     cout << a << endl;
//     cout << ptr << endl;
//     ptr = ptr + 2 ;
//     cout << a <<endl;
//     cout << ptr << endl;
// }



//two pointer cant be added but can be subtracted if datatype is same and 
//return the no. of integer it can store in that space 
// int main(){
//     int a=10;
//     int b = 2;
//     int* p1 = &a;
//     int* p2 = p1+2;
    
//     cout << p2-p1; //2
// }
//can store worth of  8 bytes or 2 integer (1 integer = 4 bytes)





//pointer can be compared
// int main(){
//     int* p1;
//     int* p2=p1+1;//if p1 is pointing at 100 so p2 is pointing at 104 as it is of int type

//     if (p2>p1){
//         cout << "p2 is greater" <<endl;
//     }else{
//         cout << "p1 is greater"<<endl;
//     }
//     cout << (p2>p1) <<endl;
// }




int main(){
    int arr[]={1,2,3,4};
    int* p1 = arr;
    

    cout << *(p1 + 1 ) <<endl;
    cout << *(p1 + 3 ) << endl;
    p1++;
    cout << *p1 << endl;
}