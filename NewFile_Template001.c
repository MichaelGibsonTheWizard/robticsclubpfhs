#pragma config(Motor,  port1,           drive,         tmotorVex393, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// Motor connected to port1, you'll need to change the code if it's connected to a different port. Moving the left joystick forward
// increases speed, and moving the left joystick backward decreases speed.

task main()
{

	while(true) {
		motor[drive] = vexRT(Ch3);
	}

}
