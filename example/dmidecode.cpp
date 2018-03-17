extern "C"
{
	#include <dmidecode.h>
}

#include <cstdio>

int main(int argc, char * const argv[])
{
	printf("%s\n", dmidecode_system_uuid());
	return 0;
}
