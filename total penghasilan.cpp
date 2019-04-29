#include <conio.h>
#include <iostream.h>
main()
{
float p,jasa=0,komisi=0,total=0;
clrscr();
cout<<"--------------------------------------------------------"<<endl;
cout<<"Pendapatan hari ini sebesar Rp. ";cin>>p;
if(p>= 0 && p <= 2000000)
{
jasa=500000;
komisi=0.1*p;
}
else
if (p<=5000000)
{
jasa=500000;
komisi=0.15*p;
}
else
{
jasa=1000000;
komisi=0.2*p;
}

/*menghitung total hasil*/
total=komisi+jasa;
cout<<"uang jasa Rp.  "<<jasa<<endl;
cout<<"uang komisi Rp.  "<<komisi<<endl;
cout<<"--------------------------------------------------------"<<endl;
cout<<"total hasil Rp. "<<total<<endl;
getch();
}