//Matrix and Matrices
#include <iostream>
using namespace std;

int main()
{
    int matrixkali1 [1][3] = {3,4,2};
    int matrixkali2 [3][4] = {{13,9,7,15},{8,7,4,6},{6,4,0,3}};
    int v,w,y=0,z=0,shift1=0,shift2=0;

    cout<<endl;
    for (v=0;v<1;v++)
    {
        for(w=0;w<3;w++)
            {
                cout<<matrixkali1[v][w]<<" ";
            }
            cout<<endl;
    }

    cout<<endl;
    for (y=0;y<3;y++)
    {
        for(z=0;z<4;z++)
            {
                cout<<matrixkali2[y][z]<<" ";
            }
            cout<<endl;
    }

    cout<<endl;
    cout<<"Perkalian Matrik1 dan Matrik2."<<endl;
    for (v=0;v<1;v++)
    {
        for(w=0;w<3;w++)
            {
                for(y=0;y<3;y++)
                {
                    cout<<matrixkali1[v][w]*matrixkali2[y][0]<<" ";
                }
            }
            cout<<endl;
    }
    cout<<endl;


    return 0;
}
