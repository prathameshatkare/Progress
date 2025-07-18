#include<bits/stdc++.h>
using namespace std;
int secondlargets(vector<int >arr){
    int n =arr.size();
    
    if(n<2) return -1;
    int firstlargest=-1;
    int secondlarget=-1;
    for(int i =0;i<n;i++){
        if(arr[i]>firstlargest){
            secondlarget=firstlargest;
            firstlargest=arr[i];
           
        }
        else if(arr[i]>secondlarget&& arr[i]<firstlargest){
            secondlarget=arr[i];
        }

    }
    return secondlarget;

}
int main(){
    vector<int >arr={12 ,35, 1 ,10, 34, 1};
    int result=secondlargets(arr);
    cout<<"Your ans is:"<<result;


}