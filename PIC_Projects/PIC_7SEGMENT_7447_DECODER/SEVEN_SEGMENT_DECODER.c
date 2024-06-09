void main() {
    TRISB=0;
    PORTB=0;
    
    for(;;)
    {
      PORTB=0;
      DELAY_MS(1000);
      PORTB=1;
      DELAY_MS(1000);
      PORTB=2;
      DELAY_MS(1000);
      PORTB=3;
      DELAY_MS(1000);
      PORTB=4;
      DELAY_MS(1000);
      PORTB=5;
      DELAY_MS(1000);
      PORTB=6;
      DELAY_MS(1000);
      PORTB=6;
      DELAY_MS(1000);
      PORTB=7;
      DELAY_MS(1000);
      PORTB=8;
      DELAY_MS(1000);
      PORTB=9;
      DELAY_MS(1000);
    }
    
}