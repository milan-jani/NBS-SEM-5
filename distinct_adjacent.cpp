//not a valid xode
#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;


void adjust(string &ans,stack<char> &st){
    if(st.empty()) return;
    char c=st.top();
    if(ans.front()!=c){
        ans=c+ans;
        st.pop();
       
    }
    else if(ans.back()!=c){
        ans=ans+c;
        st.pop();
       
    }
}
string distinct_adjacent(string s){
    int n=s.length();
    string ans="";
    ans+=s.front();
   
    
    stack<char> st;

    //dont write the code , let me write it
    for (int i = 1; i < s.size(); i++) {
         char c = s[i];
         if(ans.front()!=c){
            ans=c+ans;
            adjust(ans,st);

         }
         else if(ans.back()!=c){
            ans=ans+c;
            adjust(ans,st);
         }
         else{
            st.push(c);
            
         }
    
}
while (!st.empty()){
    char c=st.top();
    if(ans.front()!=c){
        ans=c+ans;
    }
    else if(ans.back()!=c){
        ans=ans+c;
    }
    st.pop();

}
if(!st.empty()) return "Not possible";
return ans;
}

int main(){
   
    cout << distinct_adjacent("aaabbccc") << "\n"; 
    cout << distinct_adjacent("aaaaab") << "\n";  
    cout << distinct_adjacent("abbbbccc") << "\n"; 
    cout << distinct_adjacent("abbbbcc") << "\n";
    cout << distinct_adjacent("abacccc") << "\n";
}

