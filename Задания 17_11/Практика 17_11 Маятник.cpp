#include <iostream>
#include <math.h>
  using namespace std;

  class Maiatnik{
    protected:
 virtual void Chastota()=0;
 virtual void Period()=0;
 virtual void Type()=0;
  };

  class Fizi4eski: public Maiatnik{
    public:
     void Type()override{
     cout <<"��� �������� ����������"<<endl;
     }
void Period()override{
      float T,l,m;
cout <<endl<<"������� ����� ";
cin >>l;
cout <<endl<<"������� ����� ";
cin >>m;
T=2*M_PI*sqrt(l/(9.8*m));
cout <<"������ "<<T<<endl;
}
void Chastota()override{
      float l,w,S;
cout <<endl<<"������� ����� ";
cin >>l;
cout <<endl<<"������� ����� ";
cin >>S;
w=1/sqrt(l/S);
cout <<"������� "<<w<<endl;
}


  };
  class Math: public Maiatnik{
    public:
void Type()override{
  cout <<"��� �������� ��������������"<<endl;
     }
void Period()override{
float T,l;
cout <<endl<<"������� ����� ";
cin >>l;
T=2*M_PI*sqrt(l/9.8);
cout <<"������ "<<T<<endl;
}
void Chastota()override{
float w,l;
cout <<endl<<"������� ����� ";
cin >>l;
w=sqrt(9.8/l);
cout <<"������� "<<w<<endl;
}
  };

  class PryIIIina: public Maiatnik{
public:
  void Type()override{
       cout <<"��� �������� ���������"<<endl;
     }
void Period()override{
float T,m,k;
cout <<endl<<"������� ����� ";
cin >>m;
cout <<endl<<"������� ������� ";
cin >>k;
T=2*M_PI*sqrt(m/k);
cout <<"������ "<<T<<endl;
}
void Chastota()override{
float w,k,m;
cout <<endl<<"������� ��������� ";
cin >>k;
cout <<endl<<"������� ����� ";
cin >>m;
w=sqrt(k/m);
cout <<"������� "<<w<<endl;
}
  };

int main() {
Math name;
name.Type();
name.Period();
name.Chastota();

PryIIIina name2;
name2.Type();
name2.Period();
name2.Chastota();

Fizi4eski name3;
name3.Type();
name3.Period();
name3.Chastota();

  return 0;
}
