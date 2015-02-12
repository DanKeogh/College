
task main()
{
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
wait1Msec(400);

//Straight line
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;
motor[motorA] = 50;
wait1Msec(2000);

//Turn left
nSyncedMotors = synchAB;
nSyncedTurnRatio = -100;
motor[motorA] = 50;
wait1Msec(400);

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

}
