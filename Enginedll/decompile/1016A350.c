/*
 * func-name: sub_1016A350
 * func-address: 0x1016a350
 * callers: none
 * callees: 0x101a2500, 0x101a253a
 */

_DWORD *__thiscall sub_1016A350(_DWORD *this, char a2)
{
  void *v3; // eax

  v3 = (void *)this[10];
  *this = &Pattern::`vftable';
  if ( v3 )
  {
    operator delete[](v3);
    this[10] = 0;
  }
  std::string::~string(this + 1);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
