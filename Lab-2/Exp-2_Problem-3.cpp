#include <iostream>
using namespace std;

int main() 
{
    int m,n,p,q;
    cout<<"Enter rows and columns of first matrix: ";
    cin>>m>>n;
    cout<<"Enter rows and columns of second matrix: ";
    cin>>p>>q;

    int A[100][100],B[100][100],sum[100][100],product[100][100];

    cout<<"\nEnter elements of first matrix:\n";
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<n;j++) 
        {
            cin>>A[i][j];
        }
    }

    cout<<"\nEnter elements of second matrix:\n";
    for(int i=0;i<p;i++) 
    {
        for(int j=0;j<q;j++) 
        {
            cin>>B[i][j];
        }
    }

    if(m==p && n==q) 
    {
        cout<<"\nMatrix Addition:\n";
        for(int i=0;i<m;i++) 
        {
            for(int j=0;j<n;j++) 
            {
                sum[i][j]=A[i][j]+B[i][j];
                cout<<sum[i][j]<<" ";
            }
            cout<<"\n";
        }
    } 
    else 
    {
        cout<<"\nMatrix addition is not possible.\n";
    }

    if(n==p) 
    {
        for(int i=0;i<m;i++) 
        {
            for(int j=0;j<q;j++) 
            {
                product[i][j]=0;
            }
        }
        cout<<"\nMatrix Multiplication:\n";
        for(int i=0;i<m;i++) 
        {
            for(int j=0;j<q;j++) 
            {
                for(int k=0;k<n;k++) 
                {
                    product[i][j]+=A[i][k]*B[k][j];
                }
                cout<<product[i][j]<<" ";
            }
            cout<<"\n";
        }
    } 
    else 
    {
        cout<<"\nMatrix multiplication is not possible.\n";
    }
    return 0;
}