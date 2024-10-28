#include<bits/stdc++.h>
using namespace std;
typedef vector<vector<int>>Matrix;
Matrix MM(Matrix &A,Matrix &B,int n)
{
    Matrix res(n,vector<int>(n,0));
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n ;j++)
        {res[i][j] = 0;
            for(int k = 0 ;k < n ; k++)
            {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return res;
}
int main()
{
	int n;
cin>>n;
Matrix A(n,vector<int>(n,0));
Matrix B(n,vector<int>(n,0));
for(int i = 0; i < n ; i++)
{
	for(int j = 0; j  < n ; j++){
    cin>>A[i][j];
}
}
for(int i = 0; i < n ; i++)
{
	for(int j = 0 ; j < n ; j++){
    cin>>B[i][j];
} 
}
Matrix C = MM(A,B,n);
for(int i =0 ; i < n ; i++)
{
    for(int j =0 ; j < n ; j++)
    {
        cout<<C[i][j]<<" ";
    }
}
}