#pragma config(Sensor, S1,     touchSensor,    sensorTouch)
#pragma config(Sensor, S3,     lightSensor,    sensorLightActive)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

const tSensors lightSensor = (tSensors) S3;
const tSensors touchSensor = (tSensors) S1;
task main()
{
while(1==1)//while 1
{
	while(SensorValue(touchSensor) == 0)//while 2
	{
		while(SensorValue(lightSensor) < 40)//while 3
		{

			motor[motorA] = 15;
			motor[motorB] = 35;

		}//end while 3
		while(SensorValue(lightSensor) >= 45)//while 4
		{
			motor[motorA] = 35;
			motor[motorB] = 15;

		}//end while 4

	}//end while 2
	while(SensorValue(touchSensor) == 1)//while 5
	{
		motor[motorA] = 0;
		motor[motorB] = 0;
	}//end while 5

}//end while 1

}//end main