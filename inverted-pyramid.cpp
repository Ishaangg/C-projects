#include <iostream>
using namespace std;

int main()
{
        int n;
        cout<<"Enter the number of rows "<<endl;
        cin>>n;

        for(int i=n;i>=1;i--){
                for(int j=i;j>0;j--){
                        cout<<"*";
                }
                cout<<endl;
        }
        

     
        return 0;
}