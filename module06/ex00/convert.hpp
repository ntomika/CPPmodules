#pragma once

#include <iostream>
#include <iomanip>
#include <cmath>
#include <climits>
#include <cctype>

#define CHAR	1
#define INT		2
#define FLOAT	3
#define DOUBLE	4

void	convert_char(char *s);
void	convert_int(char *s);
void	convert_float(char *s);
void	convert_double(char *s);

int		getDecimalPart(char *s);
int		check_nan(int type, char *s);
int		check_inf(int type, char *s);
