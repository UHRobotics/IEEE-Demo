#pragma config(Sensor, in1,    light1,         sensorReflection)
#pragma config(Sensor, in2,    light2,         sensorReflection)
#pragma config(Sensor, in3,    light3,         sensorReflection)
#pragma config(Motor,  port1,           motor1,        tmotorVex269, openLoop)
#pragma config(Motor,  port2,           motor2,        tmotorVex393, openLoop)
#pragma config(Motor,  port3,           motor3,        tmotorVex393, openLoop)
#pragma config(Motor,  port4,           motor4,        tmotorVex393, openLoop)
#pragma config(Motor,  port5,           motor5,        tmotorVex393, openLoop)
#pragma config(Motor,  port6,           motor6,        tmotorVex269, openLoop)
#pragma config(Motor,  port7,           motor7,        tmotorVex269, openLoop)
#pragma config(Motor,  port8,           motor8,        tmotorVex269, openLoop)
#pragma config(Motor,  port9,           motor9,        tmotorVex269, openLoop)
#pragma config(Motor,  port10,          motor10,       tmotorVex269, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
  while(true)
  {
    motor[port4] = vexRT[Ch2];
    motor[port5] = vexRT[Ch2];
    motor[port2] = -1*vexRT[Ch3];
    motor[port3] = -1*vexRT[Ch3];

    /*if(vexRT[Btn6U]==1)
   {
    	motor[port5] = 120;
    	motor[port6] = -120;
   }
    else if(vexRT[Btn6D]==1)
   {
    	motor[port5] = -120;
    	motor[port6] = 120;
   }
    else
   {
      motor[port5] = 0;
      motor[port6] = 0;
   }
    if(vexRT[Btn5U]==1)
   {
    motor[port6] = 120;
    motor[port7] = 120;
    motor[port8] = -120;
    motor[port9] = -120;
   }
    else if(vexRT[Btn5D]==1)
   {
    motor[port6] = -120;
    motor[port7] = -120;
    motor[port8] = 120;
    motor[port9] = 120;
   }
    else
   {
    motor[port6] = 0;
    motor[port7] = 0;
    motor[port8] = 0;
    motor[port9] = 0;
   }*/
  }
}
