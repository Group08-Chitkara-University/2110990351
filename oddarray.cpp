#include<iostream>
using namespace std;
int main(){

int odd[5],sum=0;
for (int i=0;i<5;i++)
{
 cout<<"enter numbers : "<<i<<endl;
 cin>>odd[i];

}
for (int i=0;i<5;i++)
{
    if(odd[i]%2!=0)
    {
        cout<<"All odd no. : "<<odd[i]<<endl;
        sum+=odd[i];

    }
    


}




cout<<"sum of odd no. is : "<<sum<<endl;






}