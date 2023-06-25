#include<iostream>
using namespace std;
int_fast64_t sum_sum(int n, int m){
    if(m==1) return (n*(n+1))/2;
    return sum_sum((n*(n+1))/2,m-1);

}
int main(){
    int n,m;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter m: ";
    cin>>m;
    cout<<sum_sum(n,m);

return 0;
}