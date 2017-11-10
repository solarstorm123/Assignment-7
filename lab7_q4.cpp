#include <iostream>

using namespace std;


//********************************************************************
                 //  Declaration of class Point
//********************************************************************

// class Point represents a two-dimensional point
 class Point
{
 public:
               // default class constructor (with no arguments):
   Point();

               // class constructor that sets the coordinates x, y to the values xval, yval:
   Point(int xval, int yval);

               // member function for moving a point by dx, dy:
   void Move(int dx, int dy);

               // member functions for getting values of x, y:
   int Get_X() const;
   int Get_Y() const;

               // member functions for setting x, y to xval, yval respectively
   void Set_X(int xval);
   void Set_Y(int yval);

   void Print (void);
               // private data members x, y represent coordinates of the point:
 private:
   int X;
   int Y;
};


//********************************************************************
               //  Methods for class Point
// ********************************************************************

                               // class constructor sets X, Y to zero when no values are specified:
   Point::Point()
   {
     X = 0;
     Y = 0;
   }

                              // class constructor sets X, Y to given values xval, yval:
   Point::Point(int xval, int yval)
   {
     X = xval;
     Y = yval;
   }
                              // member function Move: increases the x coordinate by dx and the y coordinate by dy.

   void Point::Move(int dx, int dy)
   {
     X += dx;
     Y += dy;
   }

                              // Get_X returns the value of the X coordinate
   int Point::Get_X() const
   {
    return X;
   }
                              // Get_Y returns the value of the Y coordinate
   int Point::Get_Y() const
   {
    return Y;
   }

                              // Set_X sets the value of X coordinate to xval
   void Point::Set_X(int xval)
   {
    X = xval;
   }

                              // Set_Y sets the value of Y coordinate to yval
   void Point::Set_Y(int yval)
   {
     Y = yval;
   }


   void Point::Print(void)
   {
    cout<< "\nThe coordinates of the point is : ( "<< X <<", "<< Y <<" ).\n";
   }


// ********************************************************************
                     //  Declaration of class Rectangle
// ********************************************************************

 class Rectangle
{
 Point a1, a2, a3, a4;
 int side1(void);
 int side2(void);

 public :

 Rectangle(Point a, Point c);
 Rectangle();
 void Printall(void);
 int area();

};

// ********************************************************************
                     //  Methods for class Rectangle
// ********************************************************************

  Rectangle::Rectangle()
 {
  a1.Set_X(0);       a1.Set_Y(0);
  a2.Set_X(0);       a2.Set_Y(1);
  a3.Set_X(1);       a3.Set_Y(1);
  a4.Set_X(1);       a4.Set_Y(0);
 }

  Rectangle::Rectangle(Point a, Point b)
 {
  int x1, x2, y1, y2;
  x1 = a.Get_X();
  y1 = a.Get_Y();
  x2 = b.Get_X();
  y2 = b.Get_Y();

  a1.Set_X(x1);    a1.Set_Y(y1);
  a2.Set_X(x1);    a2.Set_Y(y2);
  a3.Set_X(x2);    a3.Set_Y(y2);
  a4.Set_X(x2);    a4.Set_Y(y1);

 }

  void Rectangle::Printall(void)
 {
  a1.Print();
  a2.Print();
  a3.Print();
  a4.Print();
 }

  int Rectangle::side1(void)
 {
  int x11, x22;
  x11 = a1.Get_X();
  x22 = a3.Get_X();
  return x22-x11;
 }
  int Rectangle::side2(void)
 {
  int y11, y22;
  y11 = a1.Get_Y();
  y22 = a3.Get_Y();
  return y22-y11;
 }
  int Rectangle::area()
 {
  int s1, s2;
  s1 = side1();
  s2 = side2();
  return s1*s2;
 }

// ********************************************************************
                     //  main() function for testing classes Point and Rectangle
// ********************************************************************



                                                          // Testing classes Point and Rectangle
int main()
{
                                // Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

                                // Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;
                                // Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

  cout << "\nPoint p1 :\n";
  p1.Print();
  cout << "\nPoint p2 :\n";
  p2.Print();                   //Lab 7 exercise 4.1. Test member function print on points p1, p2:


  cout << "\nforming two rectangles,\nOne with default coordinates, and;";
  cout << "\nOther with p1 as bottom left point and p2 as top right point. The sides of the rectangle are parallel to the coordinate axes.\n";
                                //Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:
  Rectangle rec1, rec2(p1, p2);
  cout <<"\nFor rectangle one ( with default coordinates) :";
  rec1.Printall();
  cout << "\nThe area is :"<< rec1.area();
  cout <<"\nFor rectangle two ( with specified coordinates) :";
  rec2.Printall();
  cout << "\nThe area is :"<< rec2.area();
  cout<< endl;
  return 0;
}
