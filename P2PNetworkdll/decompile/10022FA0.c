/*
 * func-name: sub_10022FA0
 * func-address: 0x10022fa0
 * callers: 0x1001f4a0, 0x10020f30, 0x10022290, 0x100223b0
 * callees: none
 */

_DWORD *__thiscall sub_10022FA0(_DWORD *this)
{
  _DWORD *result; // eax
  _DWORD *v2; // edx
  bool v3; // zf

  result = (_DWORD *)*this;
  if ( this[1] )
  {
    if ( result )
    {
      do
      {
        v2 = (_DWORD *)*result;
        v3 = *result == 0;
        *result = this[1];
        this[1] = result;
        result = v2;
      }
      while ( !v3 );
    }
  }
  else
  {
    this[1] = result;
  }
  *this = 0;
  this[4] = 0;
  this[3] = 0;
  this[2] = 0;
  return result;
}
