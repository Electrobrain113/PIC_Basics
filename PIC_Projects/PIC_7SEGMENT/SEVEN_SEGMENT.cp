#line 1 "C:/Users/karthik/Desktop/DJLearning/Embedded C/My_Workspace/PIC_Projects/PIC_7SEGMENT/SEVEN_SEGMENT.c"
void main() {
 TRISB=0;
 PORTB=0;

 for(;;)
 {
 PORTB=0b1000000;
 delay_ms(1000);
 PORTB=0b1111001;
 delay_ms(1000);
 PORTB=0b0100100;
 delay_ms(1000);
 PORTB=0b0110000;
 delay_ms(1000);
 PORTB=0b0011001;
 delay_ms(1000);
 PORTB=0b0010010;
 delay_ms(1000);
 PORTB=0b0000010;
 delay_ms(1000);
 PORTB=0b1111000;
 delay_ms(1000);
 PORTB=0b0000000;
 delay_ms(1000);
 PORTB=0b0010000;
 delay_ms(1000);

 }
}
