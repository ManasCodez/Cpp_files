
int main(){
    int arr[]={1,2,3,4};
    int* p1 = arr;
    

    cout << *(p1 + 1 ) <<endl;
    cout << *(p1 + 3 ) << endl;
    p1++;
    cout << *p1 << endl;
}