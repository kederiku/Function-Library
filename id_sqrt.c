float	id_sqrt(float number)
	{
	float i;
	float x1;
	float x2;

	i = 0;

	while ((i * i) <= number )
		i+=0.1;
	x1 = i;
	i = 0;
	while (i < 10)
	{
		x2 = number;
		x2 /= x1;
		x2 += x1;
		x2 /= 2;
		x1 = x2;
		i++;
	}
	return x2;
}
