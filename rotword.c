unsigned char* RotWord(unsigned char bytes[])
{
	unsigned char first_byte = bytes[0];
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		bytes[i] = bytes[i + 1];
	}
	bytes[3] = first_bytes;
	return bytes;
}

