/*
 * func-name: sub_10037AB0
 * func-address: 0x10037ab0
 * callers: 0x100083d2
 * callees: 0x100108fc
 */

_DWORD *__thiscall sub_10037AB0(_DWORD *this)
{
  _DWORD *result; // eax
  int v3; // eax

  result = this + 50;
  if ( (_DWORD *)this[2] == this + 50 )
  {
    v3 = this[74];
    if ( v3 )
    {
      this[74] = v3 - 1;
      if ( v3 == 1 )
        this[73] = 0;
    }
    result = (_DWORD *)sub_100108FC();
    this[3] = *result;
  }
  return result;
}
