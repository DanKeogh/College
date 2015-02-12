/*Program that will cause the robot to run in a circle */
task main()
{

//Enabling PID
nMotorPIDSpeedCtrl[motorA] = mtrSpeedReg;
nMotorPIDSpeedCtrl[motorB] = mtrSpeedReg;

motor[motorA] = 100; //Motor A runs at full power
motor[motorB] = 0; //Motor B does not run
wait1Msec(2000); //Robot will continue with the previous action for 2 seconds

}//End main()
