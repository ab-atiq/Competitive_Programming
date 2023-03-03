#include <bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[3][3], outMatrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            outMatrix[i][j]=1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] % 2 == 1)
            {
                if (i == 0 && j == 0)
                {
                    outMatrix[0][0] = outMatrix[0][0] == 1 ? 0 : 1;
                    outMatrix[0][1] = outMatrix[0][1] == 1 ? 0 : 1;
                    outMatrix[1][0] = outMatrix[1][0] == 1 ? 0 : 1;
                }
                else if (i == 0 && j == 1)
                {
                    outMatrix[0][1] = outMatrix[0][1] == 1 ? 0 : 1;
                    outMatrix[0][0] = outMatrix[0][0] == 1 ? 0 : 1;
                    outMatrix[0][2] = outMatrix[0][2] == 1 ? 0 : 1;
                    outMatrix[1][1] = outMatrix[1][1] == 1 ? 0 : 1;
                }
                else if (i == 0 && j == 2)
                {
                    outMatrix[0][2] = outMatrix[0][2] == 1 ? 0 : 1;
                    outMatrix[0][1] = outMatrix[0][1] == 1 ? 0 : 1;
                    outMatrix[1][2] = outMatrix[1][2] == 1 ? 0 : 1;
                }
                else if (i == 1 && j == 0)
                {
                    outMatrix[1][0] = outMatrix[1][0] == 1 ? 0 : 1;
                    outMatrix[0][0] = outMatrix[0][0] == 1 ? 0 : 1;
                    outMatrix[1][1] = outMatrix[1][1] == 1 ? 0 : 1;
                    outMatrix[2][0] = outMatrix[2][0] == 1 ? 0 : 1;
                }
                else if (i == 1 && j == 1)
                {
                    outMatrix[1][1] = outMatrix[1][1] == 1 ? 0 : 1;
                    outMatrix[0][1] = outMatrix[0][1] == 1 ? 0 : 1;
                    outMatrix[2][1] = outMatrix[2][1] == 1 ? 0 : 1;
                    outMatrix[1][0] = outMatrix[1][0] == 1 ? 0 : 1;
                    outMatrix[1][2] = outMatrix[1][2] == 1 ? 0 : 1;
                }
                else if (i == 1 && j == 2)
                {
                    outMatrix[1][2] = outMatrix[1][2] == 1 ? 0 : 1;
                    outMatrix[0][2] = outMatrix[0][2] == 1 ? 0 : 1;
                    outMatrix[1][1] = outMatrix[1][1] == 1 ? 0 : 1;
                    outMatrix[2][2] = outMatrix[2][2] == 1 ? 0 : 1;
                }
                else if (i == 2 && j == 0)
                {
                    outMatrix[2][0] = outMatrix[2][0] == 1 ? 0 : 1;
                    outMatrix[1][0] = outMatrix[1][0] == 1 ? 0 : 1;
                    outMatrix[2][1] = outMatrix[2][1] == 1 ? 0 : 1;
                }
                else if (i == 2 && j == 1)
                {
                    outMatrix[2][1] = outMatrix[2][1] == 1 ? 0 : 1;
                    outMatrix[1][1] = outMatrix[1][1] == 1 ? 0 : 1;
                    outMatrix[2][0] = outMatrix[2][0] == 1 ? 0 : 1;
                    outMatrix[2][2] = outMatrix[2][2] == 1 ? 0 : 1;
                }
                else if (i == 2 && j == 2)
                {
                    outMatrix[2][2] = outMatrix[2][2] == 1 ? 0 : 1;
                    outMatrix[1][2] = outMatrix[1][2] == 1 ? 0 : 1;
                    outMatrix[2][1] = outMatrix[2][1] == 1 ? 0 : 1;
                }
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<outMatrix[i][j];
        }
        cout<<endl;
    }
    return 0;
}