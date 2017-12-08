char _GLOBAL_OFFSET_TABLE_;
char WHITE_ON_BLACK = 0x0f;
void clear();
void putc(int x, int y, char c);

void main(){
	clear();
	putc(5,5,'@');
}

void clear(){
	char* video_memory = (char*) 0xb8000;
	for(int x = 0; x < (25*80*2); x+=2){
		*(video_memory+x) = 0;
	}
}

void putc(int x, int y, char c){
	char* video_memory = (char*) 0xb8000;
	*((video_memory+(2*(x+(y*80)))))= c;
}
