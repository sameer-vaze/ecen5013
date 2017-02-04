#include <stdio.h>
#include <stdint.h>

void main()
{
	printf("Size of char on host is %lu\n", sizeof(char));
	printf("Size of int on host is %lu\n", sizeof(int));
	printf("Size of float on host is %lu\n", sizeof(float));
	printf("Size of double on host is %lu\n", sizeof(double));
	printf("Size of short on host is %lu\n", sizeof(short));
	printf("Size of long on host is %lu\n", sizeof(long));
	printf("Size of long int on host is %lu\n", sizeof(long int));
	printf("Size of long long on host is %lu\n", sizeof(long long));
	printf("Size of int8_t on host is %lu\n", sizeof(int8_t));
	printf("Size of uint8_t on host is %lu\n", sizeof(uint8_t));
	printf("Size of uint16_t on host is %lu\n", sizeof(uint16_t));
	printf("Size of uint32_t on host is %lu\n", sizeof(uint32_t));
	printf("Size of char* on host is %lu\n", sizeof(char*));
	printf("Size of int* on host is %lu\n", sizeof(int*));
	printf("Size of float* on host is %lu\n", sizeof(float*));
	printf("Size of void* on host is %lu\n", sizeof(void*));
	printf("Size of void** on host is %lu\n", sizeof(void**));
	printf("Size of int8_t* on host is %lu\n", sizeof(int8_t*));
	printf("Size of int16_t* on host is %lu\n", sizeof(int16_t*));
	printf("Size of int32_t* on host is %lu\n", sizeof(int32_t*));
	printf("Size of size_t on host is %lu\n", sizeof(size_t));
}