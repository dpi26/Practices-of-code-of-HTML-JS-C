
#include<iostream>
using namespace std;


int BinarySearch( int *arr, int n ,int key){
int st=0 , end=n-1;

while(st <= end){
 int mid=(st + end) / 2;

 if(arr[mid] == key) //1st round
 {
    return mid;
}
 else if(arr[mid] < key)
 {
    st = mid + 1;
} //2nd half working
 else 
 {
    end = mid-1;
} //1st half working
}
return -1;

}


//---printing subarray =---------
int Subarray( int *arr,int n){
  for(int st=0;st<=n;st++){
    for(int end=st;end<=n;end++){
      //cout<<"("<<st<<" ,"<<end<<")";
      for(int i=st;i<=end;i++){
        cout<<arr[i];
      }
      cout<<",";
    }
    cout<<endl;
  }
}

//Max Subarray sum==---------
void Maxsubarr(int *arr, int n){
  int maxsum=INT8_MAX;
  for(int st=0;st<=n;st++){
    for(int end=st; end<=n;end++){
      int currsum=0;
      for(int i=st; i<=end;i++){
        currsum+=arr[i];
      }
      cout<<currsum <<", ";
        maxsum=max(maxsum,currsum);
    }
     cout<<endl;
  }
}

//-----Kadane's thearem-------
int  maxsum(int *arr, int n){
 int Maxsum=INT8_MIN;
int CurrSum=0;
for (int i = 0; i < n; i++)
{
  CurrSum+=arr[i];
   Maxsum=max(CurrSum,Maxsum);
  if(CurrSum<0){
    CurrSum=0;
  }

}
  cout<<Maxsum;
}

//-----MaxProfit counting ------\

void MaxProfit(int *price, int n){
  int bestBuy[10000];
  bestBuy[0]=INT8_MAX;
  for (int i = 1; i <n; i++)
  {
    bestBuy[i]=min(bestBuy[i-1],price[i-1]);
    //cout<<bestBuy[i]<<",";
  }
  int profit=0;
  for (int i = 1; i <n; i++)
  {
    int currpofit=price[i]-bestBuy[i];
    profit=max(profit,currpofit);
    
  }
  cout<<profit<<",";
  cout<<endl;
}


//atleast two value are same then print true or false
bool value(int *arr,int n){
  for(int i=0;i<n;i++){
    if(arr[i-1]==arr[i]){
      return true;
    }
    
  }
  return false;

}


int main(){
int arr[7]={7,1,2,6,3,7,6};
int n=sizeof(arr)/sizeof(int);
 
   //cout<<BinarySearch(arr, n, 6)<<endl;
  // Subarray(arr ,n);
 //Maxsubarr(arr,n);
//maxsum(arr,n);
 // MaxProfit(arr, n);




 cout<<value(arr,n);

return 0;
}