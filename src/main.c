#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <malloc.h> 
#include <grrlib.h>
#include <wiiuse/wpad.h>

/*
	
	main.c - Main source file.

   	Sep 2025, guinea7pig

*/


#define WHITE 0xFFFFFFFF  //do in need to put my font png there
		      // I would do that if I were you. - Toad

int main(void) {
    	// Initialise the Graphics & Video subsystems
	GRRLIB_Init();

	WPAD_Init();
	

    	while(1) {

        	WPAD_ScanPads();  // Scan the Wiimotes
        // If HOME was pressed on a Wiimote, break out of the loop
        	if (WPAD_ButtonsDown(0) & WPAD_BUTTON_HOME) {
		 	exit(1);
                        GRRLIB_Exit()
		}
              }
	    
	/* image loading is handled from "imgload.h" */
	
		GRRLIB_SetBackgroundColour(0,0,0,0); 		//should be rgb         
		GRRLIB_Render();  // Render the frame buffer to the screen
	    
   	}

    


    
