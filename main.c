
/* library **/
#include<util/delay.h>
#include"Dio_driver/STD_TYPES.h"
#include"Dio_driver/BIT_MATH.h"
/* mcal */

#include"Dio_driver/Dio_Interface.h"

void main(){

	Dio_voidSetPinDirection(DIO_PORTB,DIO_PIN0,DIO_OUTPUT);
	Dio_voidSetPinDirection(DIO_PORTB,DIO_PIN1,DIO_OUTPUT);
	Dio_voidSetPinDirection(DIO_PORTB,DIO_PIN2,DIO_INPUT);
	Dio_voidSetPinDirection(DIO_PORTB,DIO_PIN3,DIO_INPUT);

	// activate pull up
	Dio_voidSetPinValue(DIO_PORTB, DIO_PIN2, DIO_HIGH);
	Dio_voidSetPinValue(DIO_PORTB, DIO_PIN3, DIO_HIGH);

	while(1){
		//CCW
		while(Dio_u8GetPinValue(DIO_PORTB, DIO_PIN2)==0){
		Dio_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_HIGH);
		Dio_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_LOW);

}
		//CW
		while(Dio_u8GetPinValue(DIO_PORTB, DIO_PIN3)==0){
	Dio_voidSetPinValue(DIO_PORTB,DIO_PIN0,DIO_LOW);
		Dio_voidSetPinValue(DIO_PORTB,DIO_PIN1,DIO_HIGH);

	}
	}
}
