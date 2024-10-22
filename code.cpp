#include<iostream>
#include<string>
using namespace std;

class studentGPA{
    private:
    float *array;
    int size;
    float TotalGPA = 0.0, TotalCGPA = 0.0; 
    public:
    // constructor to initialize the array with a given size
    studentGPA(int initialSize): size(initialSize)
    {
        array = new float[size];
        // now initialize the array elements and store 0 int it 
        for(int i= 0;i<size;i++)
        {
            array[i] = 0;
        }
    }
     studentGPA(){
        delete[] array;
     }
      void GetCGPA(){
        cout<<"Enter the Previous GPA"<<endl;
        for(int i = 0; i<size;i++)
        {
            cin>> array[i];

        }
      }
      // method to calculate cgpa
      void calculatorCGPA(){
        string Grade;
        for(int i = 0; i<size;i++)
        {
            TotalGPA = array[i] + TotalGPA;
        }
        TotalCGPA = TotalGPA / size;
        cout<<"Your current CGPA is :"<<TotalCGPA<<endl;
        if(static_cast<int>(TotalCGPA) ==4.0 ){
            Grade = "A";
        }
        else if ((static_cast<int>(TotalCGPA) >= 3.0) && (static_cast<int>(TotalCGPA) <4.0)){
            Grade = "B";        }
          else if ((static_cast<int>(TotalCGPA) >= 2.0) && (static_cast<int>(TotalCGPA) <3.0)){
            Grade = "C";
        }
          else if ((static_cast<int>(TotalCGPA) >= 1.0) && (static_cast<int>(TotalCGPA) <2.0)){
            Grade = "D";
        }
        else{
            Grade = "Not need to say:)";
        }
        cout<<"Your current Grade is : "<<Grade;
      }
};  

int main()
{
    int Totalsemester;
    cout<<"How many semester you have cleared"<<endl;
    cin>>Totalsemester;
    studentGPA student(Totalsemester);
    student.GetCGPA();
    student.calculatorCGPA();
    return 0;
}
