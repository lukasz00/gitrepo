double pow(double base, unsigned int exp){

	double result = 1.0;

	for(unsigned int i = 0u; i < exp; ++i){

		result *= base;
	}

	return result;
}

