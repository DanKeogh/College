/*Program that will cause the robot to move
in a straight line*/
task main()
{

//Enabling PID
nMotorPIDSpeedCtrl[motorA] = mtrSpeedReg;
nMotorPIDSpeedCtrl[motorB] = mtrSpeedReg;

//Both motors will run at full power causing
//the robot to move straight ahead
motor[motorA] = 50;
motor[motorB] = 50;
wait1Msec(6000);

}//End main()
