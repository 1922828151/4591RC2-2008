/*
 * func-name: sub_10101780
 * func-address: 0x10101780
 * callers: 0x1013db50
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_10101780(_DWORD *this)
{
  _DWORD **v2; // ecx
  _DWORD *result; // eax
  bool v4; // zf
  _DWORD *v5; // edi

  v2 = (_DWORD **)this[19];
  result = *v2;
  *v2 = v2;
  *(_DWORD *)(this[19] + 4) = this[19];
  v4 = result == (_DWORD *)this[19];
  this[20] = 0;
  if ( !v4 )
  {
    do
    {
      v5 = (_DWORD *)*result;
      operator delete(result);
      result = v5;
    }
    while ( v5 != (_DWORD *)this[19] );
  }
  return result;
}
