#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int rows, cols;
        cin >> rows >> cols;
        int arr[rows][cols];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
                cin >> arr[i][j];
        }
        
        int rows_start = 0, cols_start = 0, i,rows_end=rows,cols_end=cols;
        while (rows_start < rows_end && cols_start < cols_end)
        {
            for (int i = cols_start; i < cols_end; i++)
                cout << arr[rows_start][i]<<" ";

            rows_start++;

            for (int i = rows_start; i < rows_end; i++)
                cout << arr[i][cols_end-1]<<" ";

            cols_end--;

            if (rows_start < rows_end)
            {
                for (int i = cols_end-1; i >= cols_start; i--)
                    cout << arr[rows_end-1][i]<<" ";
                rows_end--;
            }
            if (cols_start < cols_end)
            {
                for (int i = rows_end-1; i >= rows_start; i--)
                    cout << arr[i][cols_start]<<" ";
                cols_start++;
            }
        }
        cout<<endl;
    }
    return 0;
}
