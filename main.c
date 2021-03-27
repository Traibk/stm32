#include <REGX51.H>
#include "../Lib/delay.h"
#define btt P3_5

void main(){
	unsigned char i ;
  unsigned int seg_7[11] ={ 0xc0, 0xf9, 0xa4, 0xb0, 0x99, 0x92, 0x82, 0xf8, 0x80, 0x90} ;
 
	while(1){
for(i =0; i < 10 ; i++){
		P2 = seg_7[i];
		delay(500); 

		
	}
	}
	}