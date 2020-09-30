#ifndef N
#define N	12
#endif

int f = 1;

proctype fact(int v)
{
	if
	:: v > 1 -> f = v*f; run fact(v-1)
	:: else
	fi
}

init {
	run fact(N);
	(_nr_pr == 1) ->
	printf("%d! = %d\n", N, f)
}