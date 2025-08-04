
#include <stdio.h>

int main() {
    float x = 10.0;                 // กำหนดค่าตัวแปร x
    int y = 3, z = 2, a = 1;            // กำหนดค่าตัวแปร y z a
    float rate = 5.0;                           // กำหนดค่าตัวแปร rate
    float price = 100.0, quantity = 2.0, discount = 10.0;               // กำหนดค่าตัวแปร price quantity discount
    int mistake = 2, penalty = 5;                    // กำหนดค่าตัวแปร mistake penalty
    float total = 0.0;                              // กำหนดค่าตัวแปร tatal
    int score = 100;                                // กำหนดค่าตัวแปร score

    x = x-4.0;
    x = 6.5*x;
    int xi = (int)x;
    x = xi % (y+z*a);
    x = (float)xi;
    x = x/(2.0*x);
    total = total+(price*quantity-discount);
    x = x*(1+rate/100);
    score = score-(penalty*(mistake+1)); 

    printf("x แบบเต็ม = %.2f\n",x);  //แสดงค่า x                  // ใช้ %f เพื่อแสดงค่าเป็นทศนิยม
    printf("total แบบเต็ม = %.2f\n", total); //แสดงค่า total       // ใช้ %f เพื่อแสดงค่าเป็นทศนิยม
    printf("score แบบเต็ม = %d\n", score); //แสดงค่า score         // ใช้ %d เพื่อแสดงค่าเป็นจำนวนเต็ม

    return 0;
}




    
    
    
    




    


