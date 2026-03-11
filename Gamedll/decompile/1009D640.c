/*
 * func-name: sub_1009D640
 * func-address: 0x1009d640
 * callers: 0x1000af65
 * callees: 0x100122f1, 0x102c9d50, 0x102c9dc8, 0x102c9e3e
 */

char *__thiscall sub_1009D640(char *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    `eh vector destructor iterator'(
      this,
      0x194u,
      *((_DWORD *)this - 1),
      (void (__thiscall *)(void *))RandomTextureTraceLine::~RandomTextureTraceLine);
    if ( (a2 & 1) != 0 )
      operator delete[](this - 4);
    return this - 4;
  }
  else
  {
    RandomTextureTraceLine::~RandomTextureTraceLine((RandomTextureTraceLine *)this);
    if ( (a2 & 1) != 0 )
      operator delete(this);
    return this;
  }
}
