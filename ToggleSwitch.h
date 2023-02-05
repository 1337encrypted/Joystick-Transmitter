#ifndef toggleSwitch_h
#define  toggleSwitch_h

#if (ARDUINO >= 100) 
  #include "Arduino.h"
//#else
  //#include "WProgram.h"
#endif

class toggle
{
	private:
		uint8_t togglePin;
	public:
		//Function prototype
		inline toggle(uint8_t) __attribute__((always_inline));
		inline void begin() __attribute__((always_inline));
		inline void read() __attribute__((always_inline));
		inline void write() __attribute__((always_inline));
		inline ~toggle() __attribute__((always_inline));
};

//Parametrized constructor
toggle::toggle(uint8_t togglepin)
{
  this->togglepin = togglepin;

  begin();
}

void toggle::begin()
{
  pinMode(togglePin, INPUT);
}

bool toggle::read()
{
	return (bool)digitalRead(togglePin);
}

bool toggle::write()
{
	return (bool)digitalWrite(togglePin);
}

toggle::~toggle()
{
	Serial.println("ToggleSwitch is destroyed");
}

#endif
		
