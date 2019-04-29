#include <iostream.h>
#include <conio.h>
int main(){
int x,y;
cout<<"masukkan bil.: ";
cin>>x;
y=0;
for(int i=1;i<=x;i++)
if(x%i==0)
y++;
if(y==2)
cout<<x<<" =>bil.prima "<<endl;
else
cout<<x<<" =>bukan bil.prima"<<endl;
getch();
}