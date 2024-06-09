void main() {
     TRISB.F2=0;
     TRISB.F1=1;
     PORTB.F2=0;
     PORTB.F1=0;
    
     while(1)
     {
         if(PORTB.F1==0)
         {
             PORTB.F2=1;
         }
         else
         {
            PORTB.F2=0;
         }
     }
}