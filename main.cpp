/*************************************************




*************************************************/


#include <iostream>
#include <A.h>
using namespace std;

int getSize(int data[]);

int main()
{
    //cout << "Hello world!" << endl;
    //A a = 10;
    //A b = a;
    //b.print();

    int data1[]={1,2,3,4,5};
    int size1= getSize(data1);
    int size2= sizeof(data1);

    cout<<" size1= "<<size1<<" size2="<<size2<<endl;


    return 0;
}

int getSize(int data[])
{
    return sizeof(data);
}



