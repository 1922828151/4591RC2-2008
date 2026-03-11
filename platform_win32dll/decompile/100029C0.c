/*
 * func-name: sub_100029C0
 * func-address: 0x100029c0
 * callers: none
 * callees: none
 */

int __thiscall sub_100029C0(_BYTE *this, unsigned int a2)
{
  int result; // eax
  _BYTE *v3; // eax

  if ( a2 == -2 )
  {
    if ( (char)this[6656] >= 0 && (this[6640] & 0x80) != 0 )
      return 400;
    if ( (this[6657] & 0x80) == 0 && (this[6641] & 0x80) != 0 )
      return 401;
    if ( (this[6658] & 0x80) == 0 && (this[6642] & 0x80) != 0 )
      return 402;
    if ( (this[6659] & 0x80) == 0 && (this[6643] & 0x80) != 0 )
      return 403;
    return 0;
  }
  if ( a2 != -1 )
  {
    if ( a2 <= 3 )
    {
      v3 = &this[80 * a2];
      if ( (char)v3[7028] >= 0 && (v3[6708] & 0x80) != 0 )
        return 40000;
      if ( (v3[7029] & 0x80) == 0 && (v3[6709] & 0x80) != 0 )
        return 40001;
      if ( (v3[7030] & 0x80) == 0 && (v3[6710] & 0x80) != 0 )
        return 40002;
      if ( (v3[7031] & 0x80) == 0 && (v3[6711] & 0x80) != 0 )
        return 40003;
      if ( (v3[7032] & 0x80) == 0 && (v3[6712] & 0x80) != 0 )
        return 40004;
      if ( (v3[7033] & 0x80) == 0 && (v3[6713] & 0x80) != 0 )
        return 40005;
      if ( (v3[7034] & 0x80) == 0 && (v3[6714] & 0x80) != 0 )
        return 40006;
      if ( (v3[7035] & 0x80) == 0 && (v3[6715] & 0x80) != 0 )
        return 40007;
      if ( (v3[7036] & 0x80) == 0 && (v3[6716] & 0x80) != 0 )
        return 40008;
      if ( (v3[7037] & 0x80) == 0 && (v3[6717] & 0x80) != 0 )
        return 40009;
      if ( (v3[7038] & 0x80) == 0 && (v3[6718] & 0x80) != 0 )
        return 40010;
      if ( (v3[7039] & 0x80) == 0 && (v3[6719] & 0x80) != 0 )
        return 40011;
    }
    return 0;
  }
  result = 1;
  while ( (this[result + 6372] & 0x80) != 0 || (this[result + 6116] & 0x80) == 0 )
  {
    if ( ++result >= 256 )
      return 0;
  }
  return result;
}
