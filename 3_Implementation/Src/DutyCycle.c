/**
 * @file DutyCycle.c
 * @author your name (Sambit.Nayak@ltts.com)
 * @Finding the Duty Cycle and Output Voltage of Waveform by calculating the Time period at which Diode is on 
 * and Hence Finding the Duty cycle after Finding Duty cycle we are giving Input voltage and Duty cycle value to find Output 
 * Voltage of the waveform.
 * @version 0.1
 * @date 2021-08-20
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "DutyCycle.h"
int Parameter_s();// Function for Display of the Parameteres
int Dutycycle();//Function Defination for Finding Duty Cycle
int VoltageOutputofDutyCycle();//Function defination for Finding the output Voltage

// Entering the Display Page Parameter//
int Parameter_s()
{

   int ch;

   printf("\n1.Duty_cycle");
   printf("\n2.Output_voltage");
   printf("\nEnter your choice:");
   scanf("%d", &ch);
   return (ch);
}
//Function for calculating Duty Cycle//
    int Dutycycle(int Ton, int Toff)
    {

        int Duty_Cycle = (Ton/Ton + Toff);// Ton refers to On Time of the Diode and Ton+Toff refers to the Total time period of Diode.

        return  Duty_Cycle;
    }
    //Function for calculating The Output Voltage of the Waveform//
    int VoltageOutputofDutyCycle(int D, int Vo)
    {

        int Output_voltage = Vo*(D/1+D);// Where V0 is the Input voltage given by the user and D is the Duty Cycle calculated above.

        return Output_voltage;
    }
    //Main function For taking the values in terms of Variable and Display the desired output//
 int Sambit()
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
            printf("Enter the Value of D (Duty Cycle):\n");
            printf("Enter the Value of Vo (input Voltage):\n");
            scanf("%d %d",&a,&b);
            result=VoltageOutputofDutyCycle(a,b);
            printf("Voltage output of the waveform is:%d\n",result);
            break;

           }
        }
      return 0;
}