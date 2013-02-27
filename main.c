///////////////////////////////////////////////////////////////
// CODE for texas instruments MSP430 //////////////////////////
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////


const int PROSSESSOR = F_cpu()


function unsigned int ultralydlistener()

timer = 0;
const int MAX = max_tid;





__interupt void sendultralyd()
{  
	//if (knappen trykkes for fort) Do nothing;
	if(!fullført) return;

	//tekst som sender ultralyd i signaltog i det knapp er trykket inn. (5 peaks ich)
	//timer må startes.
        

	
}


//#pragma vector = ADC10_VECTOR //når ADC har interupt.
void recieveultralyd()
{
	//filtrering av signal.


	//while (!(p1.2 & (1 << adc1)) 
	{
		if(flagg for fullført)
			break;
		//signal = ADCnivå; dette blir gjort
	}
		
	//stop timer og lagre timer.
	//evt sjekk dutycycle.
	//display_signal() som displayer signal


}


#pragma vector = WDT_VECTOR //når Watchdog har interupt.
__interupt void watchdog_timer()
{
	//interupt for lang tid
	//display_signal() som displayer signal

}


void display_signal(double distance)
{
	//tiden er allerede definert nå. Eller blir definert nå.

	//if (too long time)
		//display some generated lights.
	//else
	{
		//display lights according to value.
		//skru på et lys med 3 blink. 
		//og etterhvert lyd med "jippi"
		//flagg for fullfør settes lav.
	}
}


void main()
{
	// Initiallisere ADC

	//watchdog max-tid defineres
	WDTCTL = WDT_MDLY_32;
	//watchdog timer må intialiseres
	IE1 |= WDTIE;

	//intialisere interupts på knapp.
	
	//enable global interupts
	_EINT();

		
	while(1)
	{
		if(timer == 0)
		continue;

		recieveUltralyd();
			
	}

}
