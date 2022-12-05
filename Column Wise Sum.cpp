#include<iostream>
using namespace std;


int main(){

    
    int M, N;
    cin >> M >> N;
    
    int a[1000][1000];
    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
    {
        cin >> a[i][j];
    }
    }
  
    for(int i = 0; i < N; i++)
    {
        int sum = 0;
        for(int j = 0; j < M; j++)
    {
        sum += a[j][i];
    }
        cout << sum << ' ';
    }
}
