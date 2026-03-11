/*
 * func-name: sub_10148EE0
 * func-address: 0x10148ee0
 * callers: 0x10140f00, 0x101430d0
 * callees: none
 */

_DWORD *__thiscall sub_10148EE0(_DWORD *this, char *FileName, char a3)
{
  const char *v4; // eax

  *this = &UserStream::`vftable';
  this[1] = 0;
  v4 = "rb";
  if ( !a3 )
    v4 = "wb";
  this[1] = fopen(FileName, v4);
  return this;
}
