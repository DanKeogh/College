#pragma config(Sensor, S3,     lightSensor,    sensorLightActive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

const tSensors lightSensor = (tSensors) S3;
task main()
{
while(1==1)
{
	while(SensorValue(lightSensor) < 40)
	{

		motor[motorA] = 30;
		motor[motorB] = 65;

	}
	while(SensorValue(lightSensor) >= 45)
	{
		motor[motorA] = 65;
		motor[motorB] = 30;

	}

}

}
