/*************************************************




*************************************************/


#include <iostream>
#include <A.h>
using namespace std;

int getSize(int data[]);




int result(int x, int y) {
    //x  , y
    int result =-1;

    int num = 1;//���Ӷ���
    int rabb[100000];
    rabb[0]= 0 ;//��ֵ 0 �꣬

    for(int i = 1;i<=y;i++)//������ݣ�1 �� y��
    {
        for(int j = 0;j<num; j++)//����ȫ������
        {
            //
            if(rabb[j]>=x){
                rabb[j]=-1;//����
            }

            if(rabb[j]>=2 && rabb[j] <= (x-1)){
                //��ֳ��
                num++;
                rabb[num-1] = 0;
            }

            if(rabb[j]!=-1){
             rabb[j]++;//����++
            }
        }
        //����
        if(num>10){
            int max1=0;
            int ii1=-1;
            for(int i = 0;i<num;i++){
                if(rabb[i]>max1){
                    ii1 = i;
                    max1 = rabb[i];
                }
            }
            for(int k=ii1;k< num-2;k++){
                rabb[k]=rabb[k+1];
            }
            num--;

            int max2=0;
            int ii2=-1;
            for(int i = 0;i<num;i++){
                if(rabb[i]>max1){
                    ii2 = i;
                    max2 = rabb[i];
                }
            }

            for(int k=ii2;k< num-2;k++){
                rabb[k]=rabb[k+1];
            }
            num--;

        }


    }
    int sum =0;
    for(int i =0;i<num;i++){

        cout<<rabb[i]<<endl;
        sum += rabb[i];
    }
    result = sum;


    return result;
}

int main()
{
    //cout << "Hello world!" << endl;
    //A a = 10;
    //A b = a;
    //b.print();

   // int data1[]={1,2,3,4,5};
   // int size1= getSize(data1);
   // int size2= sizeof(data1);

   // cout<<" size1= "<<size1<<" size2="<<size2<<endl;

    int res = result(5,10);
    cout<<res<<endl;

    return 0;
}



int getSize(int data[])
{
    return sizeof(data);
}



