//Matrix and Matrices
#include <iostream>
using namespace std;

int main()
{
    int matrix1[2][2] = {{3,8},{4,6}};
    int matrix2[2][2] = {{4,0},{1,-9}};
    int matrix3[2][2] = {};
    int i,j;

    //Tampilkan Data
    cout<<"Matrik 1 :"<<endl;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<matrix1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Matrik 2 :"<<endl;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<matrix2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //Penjumlahan Matrik1 dan Matrik2
    cout<<"Penjumlahan Matrik1 dan Matrik2 :";
    /*
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<"Matrik1 ["<<i<<"] ["<<j<<"] : "<<matrix1[i][j]<<endl;
            cout<<"Matrik2 ["<<i<<"] ["<<j<<"] : "<<matrix2[i][j]<<endl;
            matrix3[i][j]=matrix1[i][j] + matrix2[i][j];
            //cout<<"Penjumlahan ["<<i<<"]["<<j<<"]:"<<matrix3[i][j]<<endl;
        }
    }
    */
    cout<<endl;
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            matrix3[i][j]=matrix1[i][j] + matrix2[i][j];
            cout<<matrix3[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
