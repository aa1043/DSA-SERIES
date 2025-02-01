#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> arr[i][j];
        }
    }
    cout << "The Original Matrix is:" << endl;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int top=0;
    int bottom=n-1;
    int right=m-1;
    int left=0;
    vector<int>v;
    while(top<=bottom&&left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            v.emplace_back(arr[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++)
        {
            v.emplace_back(arr[i][right]);
        }
        right--;
        if(top<=bottom)
        {
            for(int i=right;i>=left;i--)
            {
                v.emplace_back(arr[bottom][i]);
            }
            bottom--;
        }
        if(left<=right)
        {
            for(int i=bottom;i>=top;i--)
            {
                v.emplace_back(arr[i][left]);
            }
            left++;
        }
    }
    cout<<"The Spiral Order is"<<endl;
    for(auto it:v)
    {
        cout<<it<<" ";
     }
}



// OUTPUT

// Enter the number of rows: Enter the number of columns: Enter the elements of the matrix:
// The Original Matrix is:
// 1 2 3 
// 4 5 6 
// 7 8 9 
// The Spiral Order is
// 1 2 3 6 9 8 7 4 5 
