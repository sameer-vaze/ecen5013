#include <stdio.h>
#include <stdint.h>

#define __R	volatile const
#define __RW volatile
#define __W volatile

// #define PM_BASE	(0x80000000)

typedef struct {
__RW	uint16_t TCTL;
__RW	uint16_t TCCTL[7];
__RW	uint16_t TCR;
__RW	uint16_t TCCR[7];
__R		uint16_t TSTAT;
__RW	uint16_t TIV[7];
}__attribute__ ((packed)) PM_t;

// #define PM	((PM_t *)PM_BASE)

void main()
{
	PM_t* test;
	printf("MEMORY LOCATION\n");
	printf("%x\n", &test->TCTL);
	for(int i = 0;i<7;i++)
	{
		printf("%x\n", &test->TCCTL[i]);
	}
	printf("%x\n", &test->TCR);
	for(int i = 0;i<7;i++)
	{
		printf("%x\n", &test->TCCR[i]);
	}
	printf("%x\n", &test->TSTAT);
	for(int i = 0;i<7;i++)
	{
		printf("%x\n", &test->TIV[i]);
	}
}