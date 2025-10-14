// #include<iostream>
// #include<vector>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef unordered_set<int> usi;
typedef unordered_map<int,usi> umiusi;

//global sets
umiusi row(9);
umiusi  col(9);
umiusi  block(9);

void print_matrix(vvi &m){
        for(vi &row:m){
            for(int i:row){
                cout<<i<<" ";

            }
            cout<<endl;
        }
}


void get_info(vvi&mat){
    int x=0;
    for(vi &v:mat){
        for(int i=0;i<9;i++){
            row[x].insert(v[i]);
        }
        x++;
    }
    //print rowws 
    cout<<"rows"<<endl;
    for(pair<const int,usi> &r:row){
        cout<<r.first<<": ";
        for(int i:r.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<"cols"<<endl;
    x=0;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            col[x].insert(mat[j][i]);
        }
        x++;
    }
    //print cols
    for(pair<const int,usi> &r:col){
        cout<<r.first<<": ";
        for(int i:r.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
   
    int i=0;
    int j=0;
    int k=0;
    int jj=0,kk=0;

    while(i<9){
       // if(i==0) jj=0;
       if(i%3==0) jj=i;
       // else jj++;
        //else j=0;
        // if(i==0 or i%3==0) k=0;
        // else k+=3;
        if(kk>8) kk=0;
         for(int j=jj;j<jj+3;j++){
            for(int k=kk;k<kk+3;k++){
                block[i].insert(mat[j][k]);
            }
        }

        i++;
        kk+=3;
        }
    //print blocks
    cout<<"blocks"<<endl;
    for(pair<const int,usi> &r:block){
        cout<<r.first<<": ";
        for(int i:r.second){
            cout<<i<<" ";
        }
        cout<<endl;
    }
       
}


int main(){
    vvi m={ {1,0,0,6,0,4,7,0,0},
            {7,0,6,0,0,0,0,0,9},
            {0,0,0,0,0,5,0,8,0},
            {0,7,0,0,2,0,0,9,3},
            {8,0,0,0,0,0,0,0,5},
            {4,3,0,0,1,0,0,7,0},
            {0,5,0,2,0,0,0,0,0},
            {3,0,0,0,0,0,2,0,8},
            {0,0,2,3,0,1,0,0,0}
            };
    print_matrix(m);
    get_info(m);
    
    
}