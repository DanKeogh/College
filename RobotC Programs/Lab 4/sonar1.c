#pragma config(Sensor, S1,     sonarSensor,    sensorSONAR)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

const tSensors sonarSensor = (tSensors) S1;
task main()
{

while(SensorValue(sonarSensor) < 25)
{
	motor[motorA] = 50;
	motor[motorB] = 50;

}

motor[motorA] = -50;
motor[motorB] = -50;
wait1Msec(1000);

}