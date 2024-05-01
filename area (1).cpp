#include<iostream>
using namespace std;
class Area
{
   private :
    float rad;
    int side;
    int length;
    int breadth;
    int base;
    float height;
    float area;
    public :
      void getc()
      {
        cout<<"Enter Radius : ";
        cin>>rad;
        cout<<endl;
      }
      float area(float rad)
      {
         float pi=3.14;
         float a;
         a=3.14*rad*rad;
         return a;
      }
      void gets()
      {
        cout<<"Enter Side : ";
        cin>>side;
        cout<<endl;
      }
      float area(int side)
      {
         float a;
         a=side*side;
         return a;
      }
      void getr()
      {
        cout<<"Enter length : ";
        cin>>length;
        cout<<endl;
        cout<<"Enter breadth : ";
        cin>>breadth;
        cout<<endl;
      }
      float area(int length,int breadth)
      {
         float a;
         a=length*breadth;
         return a;
      }
      void gett()
      {
        cout<<"Enter Base: ";
        cin>>base;
        cout<<endl;
        cout<<"Enter height : ";
        cin>>height;
        cout<<endl;
      }
      float area(int base,float height)
      {
         float a;
         a=base*height/2;
         return a;
      }
      Area()
      {
      int c;
      while(c)
      {
          cout<<"1.Circle \n2.Square \n3.Rectangle \n4.Triangle"<<endl;
      cout<<"Enter : ";
      int ch;
      cin>>ch;
        switch(ch)
        {
            case 1:
                  {
                     getc();
                     area=area(rad);
                     cout<<"Area of circle is : "<<area;
                     break;
                  }
            case 2:
                  {
                     gets();
                     area=area(side);
                     cout<<"Area of Square is : "<<area;
                     break;
                  }
             case 3:
                  {
                     getr();
                     area=area(length,breadth);
                     cout<<"Area of Rectangle is : "<<area;
                     break;
                  }
              case 4:
                  {
                     gett();
                     area=area(base,height);
                     cout<<"Area of triangle is : "<<area;
                     break;
                  }
                 default:
                 {
                    cout<<"\nInvalid\n";
                 }
        }
        cout<<"Continue : ";
        cin>>c;
        cout<<endl;
      }
      }
};
int main()
{
   Area a;
}
