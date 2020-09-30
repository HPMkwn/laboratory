#define SIZE 5
chan c = [6] of {byte};
chan d = [1] of {boolean}
byte fullness = 0;
active proctype producer() {
byte data;
do
:: fullness < SIZE -> fullness = fullness + 1; c!data; data++;
:: d ? true;
od
}
active proctype consumer() {
byte data;
do
:: c?data; fullness = fullness - 1; d!true
od
}
active proctype monitor() {
assert (fullness <= SIZE);
}