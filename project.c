#include<reg51.h> 
void timer() 
{ 
TF0=0; 
TMOD=0X01; 
TH0=0X3C; 
TL0=0X60; 
TR0=1; 
while(TF0==0); 
TF0=0; 
}  
void delay(unsigned int sec) 
{ 
 unsigned int i,j;        
 for(i=0;i<=sec;i++) 
 for(j=0;j<=10;j++) 
 { 
 timer(); 
 } 
}  
void disp(unsigned int a) 
{ 
 int j; 
 unsigned int i[]={0XC0,0XF9,0XA4,0XB0,0X99,0X92,0X82,0XF8,0X80,0X98}; 
 for(j=a;j>=0;j--) 
 { 
 P1=i[j]; 
 delay(1); 
 } 
}  
void main() 
{ 
 while(1) 
 { 
 P2=0x87; 
 P3=0xFF; 
 disp(9); 
 P3=0x30; 
 disp(2); 
 P2=0x4b; 
 P3=0xFF; 
 disp(9); 
 P3=0x90; 
 disp(2); 
 P2=0x2D; 
 P3=0xFF; 
 disp(9); 
 P3=0xC0; 
 disp(2); 
 P2=0x1E; 
 P3=0xFF; 
 disp(9); 
 P3=0x60; 
 disp(2); 
 } 
}
