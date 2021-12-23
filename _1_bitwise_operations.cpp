int main()
{

	//bitwise Manipulations

	uint8_t a = 128;
	bitset<8> bit1{ a };			//1000 0000

	uint8_t shift_a = a >> 4;
	bitset<8> bit2{ shift_a };		//0000 1000

	uint8_t a_plus_s = a + shift_a;
	bitset<8> bit3{ a_plus_s };		//1000 1000

	uint16_t transfer = (uint16_t)(a_plus_s);			//0000 0000 1000 1000
	bitset<16> bit4{ transfer };

	uint16_t createHeight = (uint16_t)(a_plus_s << 8);	//1000 1000 0000 0000
	bitset<16> bit5{ createHeight };

	uint16_t createCombine = transfer + createHeight;	//1000 1000 1000 1000
	bitset<16> bit6{ createCombine };

	system("Pause");

	return 0;
}
