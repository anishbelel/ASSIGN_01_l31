#include<iostream>
using namespace std;
int cases(int n,int val)
{
    int count = 0;
    if (n == 1 && val >=0) 
        return 1;
 
    //CONCEPT: The total number of case for n will be equal to the sum of 
    //all the all the cases of n-1 with val from 0 upto val
    for (int i = 0;i <= val; i++){
        count += cases(n-1, val-i);
    }
     
    
    return count;
}
int main()
{   
    int n,val;
   cout<<"Enter n and val : ";
   cin>>n>>val;
    cout<<cases(n,val);
}