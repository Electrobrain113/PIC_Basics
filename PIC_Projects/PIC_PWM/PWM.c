ADC_Init();
int duty;
int x;

void main() {
   PWM1_Init(1000);
   PWM1_Start();
   TRISB.F0=0;
   TRISB.F1=0;
   PORTB.F0=0;
   PORTB.F1=0;
   
   while(1)
   {
   
   x=ADC_Read(0);
   duty=(x/4);
   PWM1_Set_Duty(duty);
   PORTB.F0=1;
   PORTB.F1=0;
   delay_ms(5000);
   PORTB.F0=0;
   PORTB.F1=1;
   delay_ms(5000);
   }
  
}