/*
 * func-name: sub_1001DBD0
 * func-address: 0x1001dbd0
 * callers: 0x1002f9b0, 0x1002fbc0, 0x1016ed50
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_1001DBD0(_DWORD *this)
{
  _DWORD **v2; // ecx
  _DWORD *result; // eax
  bool v4; // zf
  _DWORD *v5; // edi

  v2 = (_DWORD **)this[1];
  result = *v2;
  *v2 = v2;
  *(_DWORD *)(this[1] + 4) = this[1];
  v4 = result == (_DWORD *)this[1];
  this[2] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*result;
      operator delete(result);
      result = v5;
    }
    while ( v5 != (_DWORD *)this[1] );
  }
  return result;
}
