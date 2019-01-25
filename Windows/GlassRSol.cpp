#include "GlassRsol.h"

GlassRsol::GlassRsol()
{
	_plateId = 0;
	_id = 0;
	_x = 0;
	_y = 0;
	_w = 0;
	_h = 0;
	_RsolType = 0;
	cut = 0;
	parent = 0;
	successor_nbr = 0;
}
GlassRsol::GlassRsol(unsigned int plate, unsigned int Rsol, unsigned int x,
	unsigned int y, unsigned int w, unsigned int h,
	int t, unsigned int c, unsigned int p)
{
	_plateId = plate;
	_id = Rsol;
	_x = x;
	_y = y;
	_w = w;
	_h = h;
	_RsolType = t;
	cut = c;
	parent = p;
	successor_nbr = 0;
}

GlassRsol::GlassRsol(unsigned int plate, unsigned int Rsol, unsigned int x,
	unsigned int y, unsigned int w, unsigned int h,
	int t, unsigned int c)
{
	{
		_plateId = plate;
		_id = Rsol;
		_x = x;
		_y = y;
		_w = w;
		_h = h;
		_RsolType = t;
		cut = c;
		parent = 0;
		successor_nbr = 0;
	}
}
GlassRsol::~GlassRsol()
{
    //dtor
}
