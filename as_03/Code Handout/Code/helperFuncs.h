#include "imageIO_TGA.h"

RasterImage newImage(const char *filename);
int fileExists(const char *file);
void logCommand(char type, char *command);
void logArgs(char type, char *command);