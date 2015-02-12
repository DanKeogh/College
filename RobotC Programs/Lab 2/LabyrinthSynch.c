/*Program that will cause the robot to stop
one wheel from moving when the other is stopped by hand*/
task main()
{
nSyncedMotors = synchAB;
nSyncedTurnRatio = 100;

motor[motorA] = 50;
wait1Msec(6000);


}
