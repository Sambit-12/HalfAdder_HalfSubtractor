#include <stdio.h>
#include <stdlib.h>

int Parameter_s();
int Dutycycle();
int VoltageOutputofDutyCycle();


int Parameter_s()
{

   int ch;

   printf("\n1.Duty_cycle");
   printf("\n2.Output_voltage");
   printf("\nEnter your choice:");
   scanf("%d", &ch);
   return (ch);
}
    int Dutycycle(int Ton, int Toff)
    {

        int Duty_Cycle = (Ton/Ton + Toff);

        return Duty_Cycle;
    }
    int VoltageOutputofDutyCycle(int D, int Vo)
    {

        int Output_voltage = Vo*(D/1+D);

        return Output_voltage;
    }
 int main()
        {
            int result, a ,b;
            switch (Parameter_s()){

           case 1:
              {
                printf("Enter the Value of Ton and Toff: \n");
                scanf("%d %d",&a,&b);
                result=Dutycycle(a,b);
                printf("Duty cycle of the waveform is:%d",result);
                break;
              }

           case 2:
           {
            printf("Enter the Value of D (Duty cycle): \n");
            scanf("%d %d",&a,&b);
            result=VoltageOutputofDutyCycle(a,b);
            printf("Voltage output of the waveform is:%d\n",result);
            break;

           }
        }
      return 0;
}