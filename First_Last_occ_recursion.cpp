# include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarray=lastocc(arr,n,i+1,key);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[]={4,8,9,2,9,2,2};
    cout<<firstocc(arr,7,0,2)<<endl;
    cout<<lastocc(arr,7,0,2)<<endl;
}