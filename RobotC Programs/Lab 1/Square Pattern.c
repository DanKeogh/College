/*Program that will cause the robot to move around
in a square pattern*/
task main()
{

//Enabling PID
nMotorPIDSpeedCtrl[motorA] = mtrSpeedReg;
nMotorPIDSpeedCtrl[motorB] = mtrSpeedReg;

//Robot will move in a straight line for two seconds
motor[motorA] = 100;
motor[motorB] = 100;
wait1Msec(1000);

//Robot will turn to the left
motor[motorA] = 100;
motor[motorB] = 0;
wait1Msec(650);

//Robot will move in a straight line for two seconds
motor[motorA] = 100;
motor[motorB] = 100;
wait1Msec(1000);

//Robot will turn to the left
motor[motorA] = 100;
motor[motorB] = 0;
wait1Msec(650);

//Robot will move in a straight line for two seconds
motor[motorA] = 100;
motor[motorB] = 100;
wait1Msec(1000);

//Robot will turn to the left
motor[motorA] = 100;
motor[motorB] = 0;
wait1Msec(650);

//Robot will move in a straight line for two seconds
motor[motorA] = 100;
motor[motorB] = 100;
wait1Msec(1000);

//Robot will turn to the left
motor[motorA] = 100;
motor[motorB] = 0;
wait1Msec(650);
}
