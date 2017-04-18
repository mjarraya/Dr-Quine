#include<stdio.h>
/*FU*/
void quine(void){char*a="#include<stdio.h>%c/*FU*/%cvoid quine(void){char*a=%c%s%c;printf(a,10,10,34,a,34,10,10);}%cint main(){quine();/*BAR*/}%c";printf(a,10,10,34,a,34,10,10);}
int main(){quine();/*BAR*/}
