cmake_minimum_required (VERSION 2.6 FATAL_ERROR)

add_library  (dmidecode-lib SHARED dmidecode.h dmiopt.h util.c dmioem.c util.h config.h dmioem.h version.h dmidecode.c dmiopt.c types.h)
