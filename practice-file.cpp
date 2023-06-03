#include <iostream>
using namespace std;

// class base1
// {
// public:
//     void print()
//     {
//         cout << " hi , buddy" << endl;
//     }
// };

// class base2
// {
// public:
//     void print()
//     {
//         cout << " hi , yash " << endl ;
//     }
// };

// class derived : public base1, public base2
// {
// public:
//     void print()
//     {
//         base2::print();
//     }
// };
// // class Base1{
// //     public:
// //         void greet(){
// //             cout<<"How are you?"<<endl;
// //         }
// // };

// // class Base2{
// //     public:
// //         void greet()
// //         {
// //             cout << "Kaise ho?" << endl;
// //         }
// // };

// // class Derived : public Base1, public Base2{
// //    int a;
// //    public:
// //     void greet(){
// //         Base2 :: greet();
// //     }
// // };

// // int main()
// // {
// //     Base1 a;
// //     Base2 b;
// //     a.greet();
// //     b.greet();

// //     Derived d;
// //     d.greet();

// //     return 0;
// // }
// int main()
// {
//     base1 a;
//     base2 b;
//     a.print();
//     b.print();

//     derived d;
//     d.print();

//     return 0;
// }
/* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ */

// program of virtual function

// class student
// {
// protected:
//     int rollno;

// public:
//     void setdata(int n)
//     {
//         rollno = n;
//     }
//     void prints()
//     {
//         cout << "your roll no is : " <<rollno<< endl;
//     }
// };

// class test : virtual public student
// {
// protected:
//     float math, physics;

// public:
//     void setmarks(float m, float p)
//     {
//         math = m;
//         physics = p;
//     }
//     void printmark()
//     {
//         cout << " \n your maths marks = " << math << " and marks of physics = " << physics << endl;
//     }
// };

// class sports : virtual public student
// {
// protected:
//     int grade;

// public:
//     void setgrade(int g)
//     {
//         grade = g;
//     }
//     void printsport()
//     {
//         cout << "you got grade in sport is =" << grade << endl;
//     }
// };

// class total : public test, public sports
// {
//     float total;

// public:
//     void printtotal()
//     {
//         total = grade + math + physics;
//         prints();
//         printmark();
//         printsport();
//         cout << " your total marks is = " << total << endl;
//     }
// };

// int main()
// {
//     total yash;
//     yash.setdata(11);
//     yash.setmarks(88, 78);
//     yash.setgrade(9);
//     yash.printtotal();
//     return 0;
// }

/* ######################################################################################## */

// class yash
// {
//     int a;

// public:
//     yash(int n)
//     {
//         a = n;
//     }
//     void print()
//     {
//         cout << "your value of yash is = " << a << endl;
//     }
// };
// class karan
// {
//     int b;

// public:
//     karan(int m)
//     {
//         b = m;
//     }
//     void printb()
//     {
//         cout << "your value of karan is =" << b << endl;
//     }
// };
// class derived : public yash, public karan
// {
//     int c, d;

// public:
//     derived(int p, int q, int r, int s) : yash(p), karan(q)
//     {
//         c = r;
//         d = s;
//     }
//     void printD()
//     {
//         cout << "c and d is = " << c << " and " << d << endl;
//     }
// };

// int main()
// {
//     derived g(1, 2, 3, 4);
//     g.print();
//     g.printb();
//     g.printD();
//     return 0;
// }
/* +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

// programe for template

template <class t>
class vector
{
public:
    t *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t dotproduct(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3); // vector 1 with a float data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    vector<float> v2(3); // vector 2 with a float data type
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}