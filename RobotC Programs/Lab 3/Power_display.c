
task main()
{
	int x = 100;

			nxtDisplayStringAt(0, 31, "Power %d", x);

      motor[motorA] = 100;                //Motor C is run at a 100 power level
      motor[motorB] = 100;                //motor B is run at a 100 power level
   		wait1Msec(5000);                       //the program waits 1000 milliseconds before running further code
}
