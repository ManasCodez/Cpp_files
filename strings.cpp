#include <iostream>
#include <string>
#include <algorithm>
#include<cctype>
using namespace std;

// int main(){
//     char s[]={'a','b','c','\0'};
//     char m[]="Manas";
//     cout << s << ' ';
//     cout << endl;
//     cout << m << ' ' <<endl;

//     char str[100];
//     cin.getline(str, 100,'.' );
//     cout << str << ' ';
//     cout << endl;

//     for(char i:str){
//         cout << i << " ";
//     }
    
// }



// int main(){
//     char s[]={'a','b','c','\0'};
//     char m[]="Manas";
//     int l=0;
    
//     string s1;
//     getline(cin ,s1);
//     for(char i:s1){
//         cout << i << ' ';
//     }

// }







// int main(){
//     string s1="Manas";
//     string s2="Sharma";
//     cout << (s1+s2)<<endl;
//     if(s1==s2){
//         cout << "true";
//     }else{
//         cout << "false";
//     }

//     cout << endl;

//     if(s1<s2){
//         cout << "true";
//     }else{
//         cout << "false";
//     }
    
// }



// int main(){
//     string s;
//     getline(cin,s);
    
//     int target='a';
//     int c=0;
//     for(char i:s){
//         if(i==target){
//             c++;
//         }
//     }
//     cout << c;
// }

// int main(){
//     string a;
//     getline(cin, a);
//     char s=*(max_element(a.begin() , a.end()));
//     cout << s;
// }




// int main(){
//     string s="Ac3?e3c&a";
//     string a;
//         for(int i=s.length()-1; i>=0 ; i--){
//             if( s[i] >= 'A' && s[i]<='Z'){
//                 s[i]=char(s[i] + 32);
//             }
//             if(s[i]>='a' && s[i]<='z'){
//                 a.push_back(s[i]);
//             }   
//         }
//     string reva=a;
//     reverse(reva.begin(), reva.end());
//     if(a==reva){
//         cout << a << endl;
//         cout <<  "true";
//     }else{
//         cout << a << endl;
//         cout <<  "false";
//     }
// }




// int  main(){
//     string s="A man, a plan, a canal: Panama";
//     int i=0;
//         int j=s.length()-1;
//         while(i<=j){
//             if(!isalnum(s[i])){
//                 i++;
//             }
//             if(!isalnum(s[j] ) ){
//                 j--;
//             }
//             if(isalnum(s[i]) && isalnum(s[j])){
//                 if(tolower(s[i]) != tolower(s[j])){
//                     cout << "false";
//                     return 0;
//                 }else{
//                     i++;
//                     j--;
//                 }

//             }
//         }
//         cout << "true";
//         return 1;
//     }


#include<vector>


// int main(){
//     string s1="adc";
//     string s2="dcda";
//     vector<int>count(26,0);
//     int n=s1.length();
//     for(int i=0; i<n; i++){
//          count[ s1[i] - 97 ]++;
//     }
    
//     int windowsize = s1.length();
//     for(int i=0; i<= (s2.length() - windowsize  ); i++){
//         vector<int>a(26,0);
//         for(int j=i; j< i + windowsize ; j++){
//             a[ s2[j] - 97 ]++;
//         }
//         if(a==count){
//             cout << "true";
//             return 0;
//         }    
        

//     }
//     cout << "false";
//     return 0;
        
// }


