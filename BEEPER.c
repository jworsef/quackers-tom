void beep()
{
	GPIOB -> MODER (GPIOB -> MODER & 0xFFFFFFFC) | 0x00000001;
	GPIOB -> OTYPER (GPIOB -> OTYPER & 0xFFFFFFFE);
	GPIOB -> PUPDR (GPIOB -> PUPDR & 0xFFFFFFFC) | 0x00000002;
	GPIOB -> BSRR (GPIOB -> BSRR & 0xFFFFFFFE) | 0x00000001;
	wait3sec();
	GPIOB -> BSRR (GPIOB -> BSRR & 0xFFFEFFFF) | 0x00010000;
}
