
#include<iostream>
using namespace std;

void add(){

 int row;
 int column;

 cout<<"Enter your row value :";
 cin>>row;

 cout<<"Enter your column value :";
 cin>>column;

 int a[row][column];

 for(int i=0;i<row;i++)
 {
     for(int j=0;j<column;j++)
     {
         cout<<"Enter your "<<i<<j<<"value :";
         cin>>a[i][j];
     }
 }
 cout<<endl;

 int b[row][column];

 for(int i=0;i<row;i++)
 {
     for(int j=0;j<column;j++)
     {
         cout<<"Enter your "<<i<<j<<"value :";
         cin>>b[i][j];
     }
 }
  cout<<endl;

 int c[row][column];

 for(int i=0;i<row;i++)
 {
     for(int j=0;j<column;j++)
     {
         cout<<"Enter your "<<i<<j<<"value :";
         cin>>c[i][j];
     }
 }
  cout<<endl;

  int d[row][column];

  for(int i=0;i<row;i++)
 {
     for(int j=0;j<column;j++)
     {

         d[i][j]=a[i][j]+b[i][j]+c[i][j];
         cout<<d[i][j]<<" ";
     }
     cout<<endl;
 }
}

 int main(){


add();


return 0;
}

