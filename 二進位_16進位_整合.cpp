#include<iostream>
#include<math.h>
using namespace std;

int num;

void output1(int num1);
void output2(int num2);

int main(){
    cout << "�п�J�@��0-255���Ʀr�G";
    cin >> num;
    cout << "�Ʀr " << num << "�G" << endl;
    cout << "�G�i�� = ";
    output1(num);
    cout << endl;
    cout << "16�i�� = ";
    output2(num);
    cout << endl;
    return 0;
}
void output1(int num1){
    int space1[8] = {0};
    int num1temp = 0;
    int n1 = 0;
    while ((num1-pow(2,n1))>=0){
        n1 += 1;
    }
    n1 -= 1; //�ݷ|�Ψ�2���X����
    for(int i=n1;i>=0;i--){
        num1temp = num1 - pow(2,i); //�q�̰�����}�l��
       if(num1temp>=0){
        space1[i] = 1;
        num1 = num1temp; //�p�G�j��s��ܸӦ��謰1�A�ξl���~���
       }else{
        space1[i] = 0; //�p�G�S����ܸӦ��謰0
       }
    }
    for(int j=n1;j>=0;j--){
        cout << space1[j]; //��X
    }
}
void output2(int num2){
    int space2[2] = {0};
    int num2temp = 0;
    int n2 = 0;
    string dic[16] = {"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
    while ((num2-pow(16,n2))>=0){
        n2 += 1;
    }
    n2 -= 1;
    for(int i=n2;i>=0;i--){
        num2temp = num2 - pow(16,i);
        if(num2temp>=0){
        space2[i] = num2/pow(16,i);
        num2 = num2 - space2[i]*16;
        }else{
        space2[i] = 0;
        }
    }
    for(int j=n2;j>=0;j--){
        cout << dic[space2[j]];
    }
}