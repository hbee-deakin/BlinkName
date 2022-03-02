// We define MY_LED to be the LED that we want to blink.
//
// In this tutorial, we're using the blue D7 LED (next to D7 on the Photon
// and Electron, and next to the USB connector on the Argon and Boron).
const pin_t MY_LED = D7;

// The following line is optional, but recommended in most firmware. It
// allows your code to run before the cloud is connected. In this case,
// it will begin blinking almost immediately instead of waiting until
// breathing cyan,
SYSTEM_THREAD(ENABLED);

// The setup() method is called once when the device boots.
void setup()
{
	// In order to set a pin, you must tell Device OS that the pin is
	// an OUTPUT pin. This is often done from setup() since you only need
	// to do it once.
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop()
{
    // H = ....
	dit();
	dit();
	dit();
	dit();
	
	gap(); // letter spacing
	
	// O = ---
	dah();
	dah();
	dah();
	
	gap(); // letter spacing
	
	// P = .--.
	dit();
	dah();
	dah();
	dit();
	
	gap(); // letter spacing
	
	// I = ..
	dit();
	dit();
	
	end(); // end of message, short pause

	// And repeat!

	
	/*
	// code to blink last name (Bee) in morse code
	// B =  -...
	dah();
	dit();
	dit();
	dit();
	
	gap(); // letter spacing
	
	// E = . 
	dit();
	
	gap(); // letter spacing
	
	// E = . 
	dit();
	
	end(); // end of message, short pause
	
	// And repeat!
	*/
}

// function for short blink
void dit() { 
    digitalWrite(MY_LED, HIGH);
	delay(250ms);
	digitalWrite(MY_LED, LOW);
	delay(250ms);
}

// function for long blink
void dah() { 
    digitalWrite(MY_LED, HIGH);
	delay(1s);
	digitalWrite(MY_LED, LOW);
	delay(250ms);
}

// function for gap spacing between letters
void gap() { 
	digitalWrite(MY_LED, LOW);
	delay(1s);
}

// function for pause at end of message before repeating.
void end() { 
	digitalWrite(MY_LED, LOW);
	delay(3s);
}
