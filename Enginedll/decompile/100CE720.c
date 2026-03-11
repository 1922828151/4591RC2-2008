/*
 * func-name: sub_100CE720
 * func-address: 0x100ce720
 * callers: 0x100c5fd0, 0x100c8fd0
 * callees: 0x101a24ac, 0x101a2534
 */

_DWORD *__thiscall sub_100CE720(_DWORD *this)
{
  _DWORD *v2; // esi
  _WORD *v3; // eax

  v2 = operator new(0x18u);
  if ( v2 )
  {
    v3 = operator new(0x800u);
    *v2 = v3;
    *v3 = 0;
    v2[1] = 1024;
    v2[2] = 0;
    *((_BYTE *)v2 + 16) = 1;
    v2[5] = 0;
    v2[3] = 0;
  }
  else
  {
    v2 = 0;
  }
  this[1] = -1;
  this[2] = -1;
  *this = v2;
  *((_BYTE *)this + 12) = 0;
  return this;
}
