float	id_sqrt(float m)
	{
	float i;
	float x1;
	float x2;

	i = 0;

	while ((i * i) <= m )
		i+=0.1;
	x1 = i;
	i = 0;
	while (i < 10)
	{
		x2 = m;
		x2 /= x1;
		x2 += x1;
		x2 /= 2;
		x1 = x2;
		i++;
	}
	return x2;
}
