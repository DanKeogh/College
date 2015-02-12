const tSensors sonarSensor = (tSensors) S1;
task main()
{
	while(SensorValue(sonarSensor) > 40)
	{
		motor[motorA] = -50;
		motor[motorB] = -50;
		wait1Msec(1000);
	}
	motor[motorA] = 50;
	motor[motorB] = 50;
	wait1Msec(5000);
}
