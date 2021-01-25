//Email=chinmayeer10@gmail.com  
//Name:R.CHINMAYEE
//code

#include <iostream>
using namespace std;

int main()
{   int t,x[20],y[20],i,sum[20];
    cout<<"Enter no of tests:";
    cin>>t;
    cout<<"Enter values of x and y:\n";
    for(i=0;i<t;i++)
        {cin>>x[i]>>y[i];
        }
    for(i=0;i<t;i++)
    {   sum[i]=x[i]+y[i];
        cout<<sum[i]<<"\n";
    }
return 0;
}
