#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<deque>
#include<stack>
#include<queue>


using namespace std;

// int main(){
// #include <vector>
//     vector<int>vec={6,5,3,8,4};
//     vector<int> :: iterator it;
//     for(auto it=vec.begin() ; it!=vec.end(); it++){
//         cout << *(it) <<' ';
//     }
//     cout << endl;
//     for(auto i=vec.begin(); i<vec.end(); i++){
//         cout << *(i) << ' ';
//         }
    
// }




//LISTS
// int main(){
// #include<list>
//     list<int>l(3,1);
//     l.push_front(2);
//     l.push_back(2);
//     for(int i:l){
//         cout << i <<' ';
//     }


//     l.erase(l.begin()+2);
    
//     for(int i:l){
//         cout << i <<' ';
//     }

//     cout << l[1]; //this dont work in list
// }




// //Deque
// int main(){
// #include <deque>
//     deque<int>d={1,2,3};   
    
//     for(int i:d){
//         cout << i <<' ' ;
//     }
//     cout << endl;

//     cout << d[1];
// }





//pairs
// int main(){
//     pair<int,int>p={1,2};
//     cout << p.first << ' ' << p.second;   
//     cout << endl;

//     pair<int,char>p2={7,'M'};
//     cout << p2.first << ' ' << p2.second << endl;  

    
// }



//pair of pair
// int main(){
//     pair<int , pair<int,int>> p3={8, {1,2}};
//     cout << p3.first << ' '<< p3.second.second;  
// }




//vector of pairs
// int main(){
//     vector <pair<int,int>>vec={{1,2}, {3,4}};
    
//     for(pair<int,int>i: vec){ //we can just write "auto" instead of writing pair for the i
//         cout << i.first << ' ' << i.second << ' ';
//     }
//     cout << endl;
//     vec.push_back({5,6});
//     vec.emplace_back(7,8); // automatically converts it to a pair

//     for(auto i: vec){
//         cout << i.first << ' ' << i.second << ' ';
//     }
// }





//stack
//LIFO structure: Last in First out
// int main(){
// #include<stack>
//     stack<int>s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
    
//     while(s.empty()!=true){
//         cout << s.top() << ' ';
//         s.pop();
    
//     }
//     cout <<endl;
//     if(s.empty()){
//         cout << "stack ended !!";
//     }
    
// }



// int main(){
// #include<stack>
//     stack<int>s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
    

//     stack<int>s2;
//     s2.push(4);
//     s2.push(5);
//     s2.push(6);
    

//     s.swap(s2);    
//     while(!s.empty()){
//         cout << s.top() <<' ';
//         s.pop();
//     }if(s.empty()){
//         cout << "s is empty" << ' ';
//     }
//     cout << endl;

//     while(!s2.empty()){
//         cout << s2.top() << ' ';
//         s2.pop();
//     }if(s2.empty()){
//         cout << "s2 is empty" << ' ';
//     }

// }







//Queue
// #include <queue>
//FIFO: First in First out structure 
// int main(){
//     queue<int>q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//     q.push(4);
//     while(!q.empty()){
//         cout << q.front() << ' ';
//         q.pop();
//     }
    
// }







//priority_queue
//by defalut largest value is the highest priority element   
// int main(){
//     priority_queue<int>p;
//     p.push(1);
//     p.push(2);
//     p.push(3);
//     p.push(4);
//     p.push(5);
//     while(!p.empty()){
//         cout << p.top() << ' ';
//         p.pop();
//     }
//     cout << endl;
 
//     priority_queue<int , vector<int> , greater<int>>p2;
//     p2.push(1);
//     p2.push(2);
//     p2.push(3);
//     p2.push(4);
//     p2.push(5);
//     while(!p2.empty()){
//         cout << p2.top() << ' ';
//         p2.pop();
//     }
// }





// //map or dicitionary
// #include<map>
// int main(){
//     map<string, int>m;
//     m["manas"]=1;
//     m["raj"]=2;
//     m["newton"]=3;
//     for(auto i: m){
//        cout << i.first << ' ' << i.second <<endl;
//     }
    
    

//     for(auto i: m){
//        cout << i.first << ' ' << i.second <<endl;
//        }
//     if(m.find("raj")!=m.end()){
//         cout <<"found";
//     }else{
//         cout << "not found";
//     }
// }



// multi map
// #include<map>
// int main(){
//     multimap<string,int>m;
//     m.emplace("manas",1);
//     m.insert({"manas",2});
//     m.insert({"manas",3});
//     m.insert({"manas",4});
//     for(auto i:m){
//         cout << i.first << ' ' << i.second <<endl;
//     }
//     cout << m.count("manas");
// }





// int main() {
// 	// Your code here
//     string ch;
//     cin >> ch;
    
//     for(int i=0; i<ch.size(); i++){
//         cout << ch[i] << ' ';
//     }
    
//     return 0;
// }




// int main(){
//     int i;
//     cin >>i;
//     switch(i){
//     case 1:
//         cout << "Monday";
//         break;
//     case 2:
//         cout << "Tuesday";
//         break;
//     case 3:
//         cout << "Wednesday";
//         break;
//     case 4:
//         cout << "Thursday";
//         break;
//     case 5:
//         cout << "Friday";
//         break;
//     case 6:
//         cout << "Saturday";
//         break;
//     case 7:
//         cout << "Sunday";
//         break;
//     default:
//         cout << "Invalid day";
// }
// }








// int main() {
// 	// Your code here
//     int m=5 , n=5;
//     for(int i=1; i<=m; i++){
//         for(int j=1; j<=n; j++){
//             if(i==1 || i==m){
//                 cout << '*';
//             }else{
//                 if(j!=1 && j!=n){
//                     cout << ' ';
//                 }else{
//                     cout << '*';
//                 }
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }



// multi map
// #include<map>
// int main(){
//     multimap<string,int>m;
//     m.emplace("manas",1);
//     m.insert({"manas",2});
//     m.insert({"manas",3});
//     m.insert({"raj",4});
//     m.insert({"manas",4});
//     m.insert({"nihal",4});

//     for(auto i:m){
//         cout << i.first << ' ' << i.second <<endl;
//     }
//     cout << endl;
    
//     m.erase(m.find("manas")) ;   
//     for(auto i:m){
//         cout << i.first << ' ' << i.second <<endl;
//     }
// }





//unordered map
// #include<unordered_map>
// int main(){
//     unordered_map<string,int>m;
//     m.emplace("manas",1);
//     m.emplace("nihal",1);
//     m.emplace("raju",1);
//     for(auto i:m){
//         cout << i.first << ' ' << i.second <<endl;
//     }
//     cout << endl;

// }



// #include<set>
// int main(){
//     set<int>s;
//     s.insert(1);
//     s.insert(2);
//     s.emplace(1);
//     s.insert(3);
//     s.insert(5);

//     cout << *(s.lower_bound(3)) << endl;
//     cout << *(s.upper_bound(3))<< endl;
//     return 0;
// }





//custom comparators
// bool comparator(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second < p2.second){
//         return true;
//     }
//     if(p1.second < p2.second){return false;}
//     if(p1.second == p2.second){
//         if(p1.first<p2.first){return true;}
//     }
//     return false;
// }

// int main(){
    
//     vector<pair<int,int>>p={{1,1}, {3,1}, {1,2}, {4,3},{5,1}};
//     sort(p.begin(), p.end() , comparator);
//     for(auto i:p){
//         cout << i.first << ' ' << i.second << endl;
//     }
//     return 0;
// }








//reversing an array
// int main(){
//     vector<int>vec={1,2,3,4,5,6};
//     reverse(vec.begin() , vec.end());
//     for(int i : vec){
//         cout << i << ' ';
//     }
//     cout << endl;

//     sort(vec.begin() , vec.end());

//     for(int i : vec){
//         cout << i << ' ';
//     }
//     cout << endl;

//     reverse(vec.begin() , vec.begin()+3);

//     for(int i : vec){
//         cout << i << ' ';
//     }
//     cout << endl;

// }




//next permutation
// int main(){
//     string m="cba";
//     next_permutation(m.begin() , m.end());
//     for(char i:m){
//         cout << i << ' ';
//     }
// }


    

//max and min functions
// int main(){
//     vector<int>nums={1,2,3,5,3,7};
//     int a = *(max_element(nums.begin() , nums.end()));
//     cout << a << endl;
//     cout << __builtin_popcount(15);
// }





int main(){
    string m="manas";
    m[2]='k';
    cout << m;


  
}