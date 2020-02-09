/* Priyanshu Kumar Kharwar 
        19HCS4041 */
#include<iostream>
using namespace std;
void printper(int*,int,int,int);
int main()
{
    int sum;
    int num;
    cout<<"Enter number of the Digits ";
    cin>>num;
    cout<<"Enter the Sum of Digits ";
    cin>>sum;
    int *arr=new int[num];
    cout<<"Possible combinations are ";
    cout<<endl;
    printper(arr,0,num-1,sum);
}
void printper(int arr[],int first,int last,int add)
{
    if(first>last)
    {
        if(add==0)
        {
            for(int i=0;i<=last;i++)
             {
                 cout<<arr[i]<<" ";
             }
             cout<<endl;
        }
    }
    else
    {
        for(arr[first]=add;arr[first]>=0;arr[first]--)
        {
            printper(arr,first+1,last,add-arr[first]);
        }
    }
}