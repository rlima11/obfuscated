void main(int argc, char *argv[]) {
	unsigned long int c = 0;
	if (argc == 2) {
		for (int i = strlen(argv[1]); i > 0; i--) {
			c <<= 5;
			c += argv[1][i - 1] - 64;
		}
		printf("%lu\n", c);
	}
	else {
		printf("One argument expected.\n");
	}
}
