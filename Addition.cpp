#include<iostream>
using namespace std;
int main(){

int r1,c1,r2,c2;
cin>>r1>>c1>>r2>>c2;
int a[r1][c1],b[r2][c2];
int sum;

if (r1==r2 && c1==c2){

        cout<<"Input two matrix"<<endl;
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c1;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<r2;i++) {
        for(int j=0;j<c2;j++) {
            cin>>b[i][j];
        }
    }
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c1;j++) {
            sum[i][j]= a[i][j]+b[i][j];
        }
    }
    cout<<"Summatuion"<<endl;
        for(int i=0;i<r1;i++) {
            for(int j=0;j<c1;j++) {
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}
else{
    cout<<"Row and Column is not equal. we cannot perfrom"<<endl;
}
return 0;

}
