class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n =arr.size();
        
        int largest=-1;
        int second =-1;
        for(int i =0;i<n;i++){
            if(arr[i]>largest ){
                second=largest;    
                largest=arr[i];
        }
        else if(arr[i]>second&&arr[i]<largest){
            second = arr[i];
        }
    }
    if(largest==second ) return -1;
    else{
        return second;
    }
    
    }
};
