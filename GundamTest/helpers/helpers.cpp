void copyJumptable(int* jumpTable, int* jumpArray, int maxSize = 500) {
	// Copy the jumptable values to the output array until the first 0 is encountered
	for (int i = 0; i < maxSize; i++) {
		if (jumpTable[i] == 0) {
			break;
		}
		jumpArray[i] = jumpTable[i];
	}
}