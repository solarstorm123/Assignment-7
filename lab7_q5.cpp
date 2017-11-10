#include <iostream>

using namespace std;

class ZooAnimal
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Create(char[], int, int, int);            // prototype of create function goes here

      void Destroy ();                         // destroy function
      char* reptName ();                       // Returns the reptile name
      int daysSinceLastWeighed (int);
   };

void ZooAnimal::Create(char nm[], int cgnum, int wtDATE, int wt)
   {
    name = nm;
    cageNumber = cgnum;
    weightDate = wtDATE;
    weight = wt;
   }

void ZooAnimal::Destroy ()
   {
    cout << "\nbozo destroyed.";
   }

                                               // -------- member function to return the animal's name
char* ZooAnimal::reptName ()
   {
    return name;
   }

                                               // -------- member function to return the number of days since the animal was last weighed

int ZooAnimal::daysSinceLastWeighed (int today)
  {
   int startday, thisday;

   thisday = today/100*30 + today - today/100*100;
   startday = weightDate/100*30 + weightDate - weightDate/100*100;
   if (thisday < startday)
                         { thisday += 360;
                           return (thisday-startday);
                         }
   if (today < weightDate)
                          { today += 360;
                            return (today-weightDate);
                          }
  }



                                               // ========== an application to use the ZooAnimal class
int main ()
 {
  ZooAnimal bozo;
  char name[] = {"Bozo"};
  bozo.Create ( name, 408, 1027, 400);
  cout << "This animal's name is " << bozo.reptName() << endl;
  cout << "Days Since last Weighed :"<< bozo.daysSinceLastWeighed(10112017);
  bozo.Destroy ();
 }
