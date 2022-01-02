#include "mcc_generated_files/mcc.h"
#include "mcc_generated_files/eusart.h"
#include <stdio.h> 
#include <string.h>
#include <stdbool.h>
#include <conio.h>
#include <stdlib.h>

void main(void)
{
    SYSTEM_Initialize(); 
    INTERRUPT_GlobalInterruptEnable();
    INTERRUPT_PeripheralInterruptEnable();
    
//    volatile uint8_t rxData; 
    
    volatile uint8_t gnggaSize = 6; 
    volatile uint8_t timeSize =9; 
    volatile uint8_t latSize =9; 
    volatile uint8_t nsSize =1; 
    volatile uint8_t longSize =11; 
    volatile uint8_t ewSize =1; 
    
    unsigned char rx_gps[6];  
    unsigned char rx_time[9]; 
    unsigned char rx_lat[9]; 
    volatile unsigned char rx_ns; 
    volatile unsigned char rx_long[10];
    volatile unsigned char rx_ew; 
      
    volatile uint8_t fpos = 0; 
    volatile uint8_t cpos = 0; 
    volatile uint8_t timepos = 0; 
    volatile uint8_t latpos = 0; 
    volatile uint8_t nspos = 0; 
    volatile uint8_t longpos = 0; 
    volatile uint8_t ewpos = 0; 
    
    //flag
    volatile bool g_ok = false; 
    volatile bool time_go = false; 
    volatile bool lat_go = false; 
    volatile bool long_go = false; 
    volatile bool ns_go = false; 
    volatile bool ew_go = false; 
    
    const unsigned char header_g[] = {"$GNGGA"}; 
     
    for(int i=0; i < latSize ; i++){    
        rx_lat[i] = 0;  
    }
    for(int i=0; i < longSize ; i++){  
        rx_long[i] = 0; 
    }
    for(int i=0; i < timeSize ; i++){  
        rx_time[i] = 0; 
    }
    
    while(1){ 
        if(uartFlag){  
            if(rxData == '$'){
                dollarFlag =true;
            }
            
            if(dollarFlag){
                if(fpos < gnggaSize ){         
                    if(rxData == header_g[fpos] ){  
                        rx_gps[fpos]=rxData;  
                        fpos++;     
                    }
                    if(fpos == gnggaSize){ 
                        g_ok=true; 
                        fpos=0;
                        dollarFlag=false;
                    }
                 }
            } 
            
            if(g_ok){       
                if(rxData == ','){         
                    cpos++;        
                }
            }

            switch (cpos){   
                
                case 1:     
                    //time
                    time_go = true;  
                    break;    
                case 2:   
                    //lat
                    lat_go = true; 
                    break;    
                case 3:   
                    //ns
                    ns_go = true;
                    break;    
                case 4:   
                    //long
                    long_go = true;   
                    break;  
                case 5:   
                    //es
                    ew_go = true;    
                    break; 
                case 6:   
                    g_ok=false; 
                    cpos = 0;
                   
//					for(int i=0; i < timeSize ; i++){  
//                        EUSART_Write(rx_time[i]);   
//                    }
//                    EUSART_Write(10);
//					EUSART_Write(13);  
                    
					for(int i=0; i < latSize ; i++){  
                        EUSART_Write(rx_lat[i]);  
                    }        
                    EUSART_Write(10);
					EUSART_Write(13);
                    
					EUSART_Write(rx_ns);
					EUSART_Write(10);
					EUSART_Write(13);
                    
					for(int i=0; i < longSize ; i++){   
                        EUSART_Write(rx_long[i]);   
					}
					EUSART_Write(10);
					EUSART_Write(13);
                    
					EUSART_Write(rx_ew);

					EUSART_Write(10);
					EUSART_Write(13); 
					break;

				default: 
                break;
	       }
           
            //time
            if(time_go){  
                if(rxData != ','){ 
                    if(timepos < timeSize){ 
                        rx_time[timepos]=rxData; 
                        timepos++; 
                    }
                }else if(timepos > 0){  
	                time_go=false;  
                    timepos=0;
                }
            }
            
            //lat  
            if(lat_go){  
                if(rxData != ','){   
                    if(latpos < latSize){   
                        rx_lat[latpos]=rxData;   
                        latpos++;                       
					}
                }else if(latpos >0){
                    lat_go=false; 
                    latpos =0;
                }
            }
     
            //ns
            if(ns_go){  
                if(rxData != ','){      
                    if(nspos < nsSize){    
                        rx_ns=rxData; 
                        nspos++;  
					}
                }else if(nspos >0){  
					ns_go=false;   
                    nspos=0;
                }
            }

            //long   
            if(long_go){  
                if(rxData != ','){   
                    if(longpos < longSize){
                        rx_long[longpos]=rxData;
                        longpos++;
		            }
                }else if(longpos > 0 ){
                    long_go=false;
                    longpos=0;
		        }
			}
            

            //ew
            if(ew_go){    
                if(rxData != ','){   
                    if(ewpos < ewSize){  
                        rx_ew=rxData;  
                        ewpos++; 
                    }
                }else if(ewpos > 0){
                    ew_go=false; 
                    ewpos=0;
                }
            }
            uartFlag = false;
        }    
    }
}