// ------------
// Light an LED
// ------------

// First, we're going to make some variables.
// This is our "shorthand" that we'll use throughout the program:

int led = D7; // Instead of writing D7 over and over again, we'll write "led".
// This one is the little blue LED on your Photon next to pin D7.
// This LED is tied directly to pin D7, meaning you can activate it by passing voltage to pin D7.

// Having declared this variable, let's move on to the setup function.
// The setup function is a standard part of any microcontroller program.
// It runs only once when the device boots up or is reset.

void setup() {

  // We are going to tell our Photon that "led" (defined above as pin D7) is going to be configured for output using the "pinMode" function.
  // When we call the "pinMode" function, we give it a pin (or, in this case, a variable that points to a pin) and a mode (OUTPUT, in this case).
  // (That means that we will be sending voltage to it, rather than monitoring voltage that comes from it)
  // It's important you do this here, inside the setup() function rather than outside it or in the loop function.

  pinMode(led, OUTPUT);

}

// Next we have the loop function, the other essential part of a microcontroller program.
// This routine gets repeated over and over, as quickly as possible and as many times as possible, after the setup function is called.
// In this case, we are only doing 1 thing, so you won't notice any change as the loop repeats.
// Note: Code that blocks for too long (like more than 5 seconds), can make weird things happen (like dropping the network connection).

void loop() {
  // To light the LED, we will set the voltage going to "led" to HIGH.
  digitalWrite(led, HIGH);

  // Pins behave differently based on how much (or little) voltage is sent to them.
  // Digital pins only accept two values, HIGH and LOW.  HIGH turns the pin on while LOW leaves it off.

}

