#define GARE_DEFINE_RUBY_UTILS
#include "GARE.hpp"

__declspec(dllexport) VALUE BitmapTest(HMODULE RGSSDll, VALUE bitmap) {
	StartGARE(RGSSDll);
	return Bitmap_get_pixel(bitmap, INT2FIX(0), INT2FIX(0));
}