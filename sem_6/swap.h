#pragma once
#include <stdio.h>
#include <stdlib.h>
#define SWAP(var_1, var_2) ({typeof(var_1) var_temp = var_1; var_1 = var_2; var_2 = var_temp;})