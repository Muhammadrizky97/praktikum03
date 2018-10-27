#include <iostream>
#include<conio.h>
using namespace std;


main(){

int a,b,c;
cout<<"   Mencari Nilai Tengah "<<endl;
cout<<"============================"<<endl;
cout<<"nilai a = ";cin>>a;
cout<<"nilai b = ";cin>>b;
cout<<"nilai c = ";cin>>c;
cout<<endl;
 if (a<b&&b<c||a>b&&b>c)
  {
  cout<<"Nilai tangah adalah b="<<b;
  }
 else if (a<c&&c<b||a>c&&c>b)
  {
  cout<<"Nilai tangah adalah c="<<c;
  }
 else
  {
  cout<<"Nilai tangah adalah a="<<a;
  }
cout<<endl;
cout<<"     Identitas Diri "<<endl;
cout<<"============================"<<endl;
cout<<"Nama    = Muhammad Rizky"<<endl;
cout<<"NIM    = 311810919"<<endl;
cout<<"Kelas   = TI.18.C2"<<endl;

getch();
}
