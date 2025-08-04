
#include <stdio.h>

int main() {
    float x = 10.0;                 // กำหนดค่าตัวแปร x
    int y = 3, z = 2, a = 1;            // กำหนดค่าตัวแปร y z a
    float rate = 5.0;                           // กำหนดค่าตัวแปร rate
    float price = 100.0, quantity = 2.0, discount = 10.0;               // กำหนดค่าตัวแปร price quantity discount
    int mistake = 2, penalty = 5;                    // กำหนดค่าตัวแปร mistake penalty
    float total = 0.0;                              // กำหนดค่าตัวแปร tatal
    int score = 100;                                // กำหนดค่าตัวแปร score

    x -= 4.0;          //คำนวณค่า x แบบย่อ                   
    x *= 6.5;           //คำนวณค่า x แบบย่อ               
    int xi = (int)x;    //กำหนดตัวแปร xi เพื่อใช้ แปลงค่า x ให้เป็น int เพื่อเอาไป mod ในการคำนวณขั้นต่อไป
    xi %= (y + z * a);  //คำนวณค่า xi แบบย่อ                
    x = (float)xi;      //แปลงค่า x ให้กลับไปเป็น float
    x /= (2.0 * x);     //คำนวณค่า x แบบย่อ              
    total += (price * quantity - discount);  //คำนวณค่า tatol แบบย่อ
    x *= (1 + rate / 100);            //คำนวณค่า x แบบย่อ
    score -= (penalty * (mistake + 1));  //คำนวณค่า score แบบย่อ
   
    printf("x แบบย่อ = %.2f\n", x);  //แสดงค่า x                  // ใช้ %f เพื่อแสดงค่าเป็นทศนิยม
    printf("total แบบย่อ = %.2f\n", total); //แสดงค่า total       // ใช้ %f เพื่อแสดงค่าเป็นทศนิยม
    printf("score แบบย่อ = %d\n", score); //แสดงค่า score         // ใช้ %d เพื่อแสดงค่าเป็นจำนวนเต็ม

    return 0; //จบการทำงาน
}

// ผลลัพธ์ของทั้งแบบเต็มและแบบย่อมีค่าเท่ากัน ต่างกันแค่รูปแบบโครงสร้างในการเขียน




    
    
    
    




    


