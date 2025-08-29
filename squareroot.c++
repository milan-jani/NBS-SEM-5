#include<iostream>
#include<cmath>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;


int nearby_sqrt(int n) {
    int low = 0, high = n, ans = 0;
    while (low <= high) {
        long long mid = (low + high) / 2;
        if (mid * mid <= n) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
            
        }
    }
    return ans; 
}

double sqr_vedic(int base, int n) {
   double dif=n-(base*base);

   return base+(dif/(2*base));


}

double diff(double a, double b) {
    return abs(a - b);
}

double perdiff(double a, double b) {
    return (abs(a - b) / b) * 100.0;
}

void solve(int range){
    vector<pair<int,double>> ans;
    for(int i=1;i<range;i++){
        double real=sqrt(i);
        int base=nearby_sqrt(i);
        
        double vedic=sqr_vedic(base,i);
        double per=perdiff(vedic,real);
        ans.push_back({i,per});
    }
    //sort in decreasing order of percentage difference
    sort(ans.begin(),ans.end(),[](pair<int,double> a,pair<int,double> b){
        return a.second>b.second;
    });
    cout<<"Number\tPercentage Difference"<<endl;

    for(pair<int,double> p:ans){
        // cout<<p.first<<"\t"<<fixed<<setprecision(3)<<p.second<<"%"<<endl;
        //print the ans vector
        if(p.second>1.0) 
        cout<<p.first<<"\t"<<fixed<<setprecision(6)<<p.second<<"%"<<endl;

    }

}

int main(){
    // int n=76;
    // int base= nearby_sqrt(n);
    // double real=sqrt(n);
    // cout<<"base:"<<base<<endl;
    // double ved=sqr_vedic(base,n);
    // cout<<"using vedic method:"<<fixed<<setprecision(3)<<ved<<endl;
    // cout<<"using sqrt funcn:"<<real<<endl;
    // cout<<"difference:"<<diff(ved,real)<<endl;
    // cout<<"percentage difference:"<<perdiff(ved,real)<<"%"<<endl;
    //vector<int> arr={65,76};
    int range;
    cin>>range;
    
    
    solve(range);

    return 0;
}
