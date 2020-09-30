active proctype Hello() {
printf("hello world, my processID is : %d\n",_pid);
}


init {
int lastpid;
printf("init process, id is %d \n", _pid);
lastpid = run Hello();
printf("lastpid was %d \n",lastpid);
}