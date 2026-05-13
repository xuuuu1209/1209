#include <iostream>
using namespace std;
int main()
{
    // 微積分小考三次30%，期中考30%，期末考40%。
    double t1, t2, t3, middle_exam, final_exam;
    cout<<"三次小考的成績分別是"<<endl;
    cin>>t1>>t2>>t3;
    cout<<"期中考成績是"<<endl;
    cin>>middle_exam;
    int sum=(t1+t2+t3)/10+middle_exam*0.3;
    cout<<"目標等第對照成績"<<endl;
    cout<<"a+:"<<(90-sum)/0.4<<endl;
    cout<<"a:"<<(85-sum)/0.4<<endl;
    cout<<"a-:"<<(80-sum)/0.4<<endl;
    cout<<"b+:"<<(77-sum)/0.4<<endl;
    cout<<"b:"<<(73-sum)/0.4<<endl;
    cout<<"b-:"<<(70-sum)/0.4<<endl;
    cout<<"c+:"<<(67-sum)/0.4<<endl;
    cout<<"c:"<<(63-sum)/0.4<<endl;
    cout<<"c-:"<<(60-sum)/0.4<<endl;
    return 0;
}
