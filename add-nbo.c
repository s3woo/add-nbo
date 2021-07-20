#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> 

int main(int argc, char *argv[]) {
uint32_t a;
uint32_t b;

FILE *pa = fopen(argv[1],"r");
FILE *pb = fopen(argv[2],"r");

fread(&a,sizeof(a),1,pa);
fread(&b,sizeof(b),1,pb);
//printf("%x\n",a);
//printf("%x\n",b);

a=ntohl(a);
b=ntohl(b);

//printf("%x\n",a); 
//printf("%x\n",b);


printf("%d(0x%x) + %d(0x%x) = %d(0x%x) \n",a,a,b,b,a+b,a+b);

return 0;
}

