//ques-Given a n x n matrix. The problem is to sort the given matrix in strict order. Here strict order means that matrix is sorted in a way such that all elements in a row are sorted in increasing order and for row ‘i’, where 1 <= i <= n-1, first element of row ‘i’ is greater than or equal to the last element of row ‘i-1’
#include<bits/stdc++.h>
#define SIZE 10
using namespace std;
void sortingmatrix(int mat[SIZE][SIZE],int r,int c)
{
    int temp[r*c];//array to store all elements of matrix
    int k=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            temp[k++]=mat[i][j];
        }
    }
    sort(temp,temp+k);

    cout<<"\nMatrix after sorting:\n";
    int k1=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            mat[i][j]=temp[k1++];
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }

}
int main()
{
    int r,c;
    cout<<"Enter rows and col for the matrix:";
    cin>>r>>c;
    int mat[SIZE][SIZE];
    cout<<"Enter the elements for the matrix:";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"\nMatrix:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    sortingmatrix(mat,r,c);
    return 0;


}

