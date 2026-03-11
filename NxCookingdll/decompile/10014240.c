/*
 * func-name: sub_10014240
 * func-address: 0x10014240
 * callers: none
 * callees: 0x1000fac0
 */

int __thiscall sub_10014240(_DWORD *this, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // esi

  if ( a2 )
    return 0;
  switch ( a3 )
  {
    case 0:
      result = this[4];
      break;
    case 1:
      result = this[3];
      break;
    case 2:
      v4 = this + 1;
      if ( !this[5] )
        sub_1000FAC0((int)(this + 1));
      result = v4[4];
      break;
    case 5:
      result = this[21];
      break;
    default:
      return 0;
  }
  return result;
}
