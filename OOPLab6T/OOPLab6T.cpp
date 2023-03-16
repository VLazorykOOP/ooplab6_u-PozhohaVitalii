// OOPLab3Tpl.cpp : Цей файл містить є шаблоном для 
// виконання лаб. роботи №6. 
// Він містинь функцію "main" з якої починається та закінчується виконання програми.
//

#include <iostream>
using namespace std;

// Ваші файли загловки 
//
#include "Lab6Example.h"
#include "Task_1.h"
#include "Task_2.h"
#include "Task_3.h"
int main()
{
    std::cout << " Lab #6  !\n";
    //  Код виконання завдань
   /*
    N1_2_3_1 A1;
    N1_2_3_1v A2;
    cout << sizeof(N1_2_3_1)<<endl;
    cout << sizeof(N1_2_3_1v) << endl;

    cout << endl;

    N1_1_1_1 A3;
    N1_1_1_1v A4;
    cout << sizeof(N1_1_1_1) << endl;
    cout << sizeof(N1_1_1_1v) << endl;
    //  Головне меню завдань
  
   
   */
   /*
    cout << endl;
    
    Figure *Fg[4];

    circle* myCircle = new circle();
    myCircle->setR(5.0);
    Fg[0] = myCircle;

    trapezium* myTrapezium = new trapezium();
    myTrapezium->setABH(2, 4, 3);
    Fg[1] = myTrapezium;

    triangleR* myTriangle = new triangleR();
    myTriangle->setKats(3, 4);
    Fg[2] = myTriangle;

    Rectangle* myRectangle = new Rectangle();
    myRectangle->setAB(5, 6);
    Fg[3] = myRectangle;

   

    cout << Fg[0]->area() << " " << Fg[1]->area() << " " << Fg[2]->area() << " " << Fg[3]->area() << endl;

    delete myCircle;
    delete myTrapezium;
    delete myTriangle;
    delete myRectangle;

    */
     cout << endl;
    
    STFT GF;



    GF.show();
    
    Father* F1;
    STFT * SF1;
    SF1 = new STFT();
   // F1 = SF1;
    //F1->show();
    Student St;
    cout << St;
    cout << endl;
    cin >> St;
    cout << endl;
    cout << St; 
    //  Функції та класи можуть знаходитись в інших файлах проекту

    


    //Example();

}