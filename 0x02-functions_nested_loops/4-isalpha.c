int _isalpha(int c)
{
	int r;
	if ((65 <= c && c <= 90) || (97 <= c && c <=122))
	{
		r=1;
	}
	else {
		r=0;
	}
	return r;
}
