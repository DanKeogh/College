
task main()
{
//Initialising variables
int random_num = (random(2)); 	//To be used to make the robot randomly choose
																//to go for the number 3 area

//Enabling PID
nMotorPIDSpeedCtrl[motorA] = mtrSpeedReg;
nMotorPIDSpeedCtrl[motorB] = mtrSpeedReg;

//Straight line
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;
motor[motorA] = 50;
wait1Msec(2000);

//Turn left
nSyncedMotors = synchAB;
nSyncedTurnRatio = -100;
motor[motorA] = 50;
wait1Msec(410);

//Straight line
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;
motor[motorA] = 50;
wait1Msec(2000);

if(random_num >= 2)
{
//Turn right
nSyncedMotors = synchAB;
nSyncedTurnRatio = -100;
motor[motorA] = -50;
wait1Msec(500);

//Straight line
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;
motor[motorA] = 50;
wait1Msec(1150);

//Turn right
nSyncedMotors = synchAB;
nSyncedTurnRatio = -100;
motor[motorA] = -50;
wait1Msec(450);

//Straight line
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;
motor[motorA] = 50;
wait1Msec(1000);
}//End if
else
{
//Turn left
nSyncedMotors = synchAB;
nSyncedTurnRatio = -100;
motor[motorA] = 50;
wait1Msec(375);

//Straight line
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;
motor[motorA] = 50;
wait1Msec(1800);

//Turn left
nSyncedMotors = synchAB;
nSyncedTurnRatio = -100;
motor[motorA] = 50;
wait1Msec(375);

//Straight line
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;
motor[motorA] = 50;
wait1Msec(1000);

//Turn left
nSyncedMotors = synchAB;
nSyncedTurnRatio = -100;
motor[motorA] = 50;
wait1Msec(370);

//Straight line
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;
motor[motorA] = 50;
wait1Msec(1000);
}//End else

}//End main()
