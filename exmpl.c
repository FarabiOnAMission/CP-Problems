#include <stdio.h>
void countCalls() {
// 'count' is a static variable. It's initialized to 0 only once.
static int count = 0;
count++; // The value of count is preserved for the next call!
printf("This function has been called %d time(s).\n", count);
}
int main() {
printf("Calling countCalls three times...\n");
countCalls();
countCalls();
countCalls();
return 0;
}