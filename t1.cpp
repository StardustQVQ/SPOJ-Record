#include<cstdio>
using namespace std;

int  index, in, input[1000];

int main(){
	index = 0;
	while(1){
		scanf("%d", &in);
		if(in == 42) break;
		input[index++] = in;
	}
	for(int i = 0; i < index; i++)
	printf("%d\n", input[i]);
	
	return 0;
}
