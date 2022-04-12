#include<iostream>
using namespace std;
int main(){
int arr[5];
for(int i=0;i<5;i++)
{
    cout<<"enter array : "<<i<<endl;
    cin>>arr[i];
}

int max_no=arr[0];
int min_no=arr[0];
for(int i=0;i<5;i++)
{
   if (arr[i]>max_no)
   {
       max_no=arr[i];
      
   }
  
   if (arr[i]<min_no)
   {
       min_no=arr[i];
       
   }
   
   cout<<arr[i]<<endl;
  
}

 cout<<"min value of array is : "<<min_no<<endl;
 cout<<"max value of array is : "<<max_no<<endl;


return 0;
}