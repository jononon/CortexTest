
//counts to one million
//returns time it takes to do so
int testCortexPerformance () {
	long startTime = nPgmTime;
	for(int i = 0; i<1000000; i++) {}
	return nPgmTime-startTime;
}

task main()
{
	clearDebugStream();
	writeDebugStreamLine("Time to count to 1 million: %d", testCortexPerformance());

}
