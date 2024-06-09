sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D7 at RB3_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D4 at RB0_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D7_Direction at TRISB3_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D4_Direction at TRISB0_bit;

char keypadport at portd;
void main() {
    int i,kp, password[5],default_Password[5]={1,2,3,4,5};
    char str[16];
     Lcd_Init();
     Lcd_Cmd(_LCD_CURSOR_OFF);
     Keypad_Init();
     TRISC.F0=0;
     PORTC.F0=0;
     
     Begin:
     Lcd_Out(1,1,"Enter Password");
     delay_ms(2000);
     Lcd_Cmd(_LCD_CLEAR);
     
     for(i=0;i<4;i++)
     {
      do
      {
       kp=Keypad_Key_Click();
      }
       while(!kp);
        switch(kp)
       {
       case 1: kp=7; break;
       case 2: kp=8; break;
       case 3: kp=9; break;
       case 4: kp='A'; break;
       case 5: kp=4; break;
       case 6: kp=5; break;
       case 7: kp=6; break;
       case 8: kp='B'; break;
       case 9: kp=1; break;
       case 10: kp=2; break;
       case 11: kp=3; break;
       case 12: kp='C'; break;
       case 13: kp='*'; break;
       case 14: kp=0; break;
       case 15: kp='#'; break;
       case 16: kp='D'; break;
       }
       password[i]=kp;
       inttostr(kp,str);
       Lcd_Out_Cp("*");
     }
     if(strcmp(password, default_Password)==0)
     {
     Lcd_Cmd(_LCD_CLEAR);
      Lcd_Out(1,1,"Welcome");
      portc.f0=1;
     }
     else
     {
     Lcd_Cmd(_LCD_CLEAR);
     Lcd_Out(1,1,"Wrong Password");
     delay_ms(2000);
     goto Begin;
     }
}