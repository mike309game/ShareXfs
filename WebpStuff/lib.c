#include <webp/encode.h>
#include <webp/decode.h>
#include <strings.h>
#include <stdio.h>

#define exp __attribute__((visibility("default")))

exp size_t EncodeBgra(char* buff, int width, int height, int stride, char** outBuff) {
	size_t s = WebPEncodeLosslessBGRA(buff, width, height, stride, outBuff);
	//FILE* fp = fopen("D:\\test.webp", "wb");
	//fwrite(outBuff, s, 1, fp);
	//fclose(fp);
	return s;
}

exp int ValidateAndGetRes(char* buff, int buffSize, int* width, int* height) {
	return WebPGetInfo(buff, buffSize, width, height);
}

exp char* Decode(char* buff, int buffSize, int* width, int* height) {
	return WebPDecodeRGBA(buff, buffSize, width, height);
}

exp void FreeWebp(char* ptr) {
	WebPFree(ptr);
}