#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <limits.h>
#include <stddef.h>


char *my_itoa(int n, char *str, size_t str_size, unsigned short base);

int main(){
  
  int num, i, sum = 0, c = 0;
  char snum[10], sn[10], snc[10];
  
  snc[0]= 0;
  int n, k;
  
  scanf("%d %d", &n, &k);
  
  my_itoa(n, sn, 10, 10);
  
  for(i = 0; i < k; i++){
  	strcat(snc, sn);
  }
  
  do{
  	
  	 for(i = 0; i < strlen(snc); i++){
  		sum += snc[i] - 48;
  		c++;
  	 }
  	 my_itoa(sum, snc, 10, 10);
  	 c = 0;
  	 sum = 0;
  	 
  }while( strlen(snc) != 1);
  
  puts(snc);
  printf("\n");
  return 0;
}


char *my_itoa(int n, char *str, size_t str_size, unsigned short base){
	static const char symbols[36]={
		'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B',
		'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
		'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'
	};
	unsigned abs_n;
	unsigned quot, rem;
	char rev_str[CHAR_BIT*sizeof(int)];
	int rev_str_len=0;

	if(base<2 || base>sizeof symbols){  
		errno=EINVAL;
		return NULL;
	}

	if(str_size<2){  
		errno=ERANGE;
		return NULL;
	}

	if(n<0){  
		abs_n=(unsigned)-n;
		*str++='-';
		str_size--;
	}
	else
		abs_n=n;

	do {
		quot=abs_n/base;
		rem=abs_n-quot*base;
		rev_str[rev_str_len++]=symbols[rem]; 
		if(rev_str_len>str_size-1){  
			errno=ERANGE;
			return NULL;
		}
		abs_n=quot;
	} while(quot>0);

	do
		*str++=rev_str[--rev_str_len];  
	while(rev_str_len>0);

	*str='\0';  

	return str;
}

