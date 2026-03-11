/*
 * func-name: sub_100612A0
 * func-address: 0x100612a0
 * callers: 0x10060230, 0x100604d0
 * callees: none
 */

int __thiscall sub_100612A0(unsigned __int16 *this)
{
  int result; // eax
  int v2; // esi
  __int16 i; // di
  __int16 v4; // dx
  int v5; // eax

  result = this[10];
  if ( (_WORD)result )
  {
    v2 = (unsigned __int16)result - 1;
    for ( i = -1; v2 >= 0; i = v4 )
    {
      v4 = v2;
      v5 = 6 * (unsigned __int16)v2--;
      *(_WORD *)(v5 + *(_DWORD *)this + 4) = i;
      *(_WORD *)(v5 + *(_DWORD *)this + 2) = v4;
    }
    result = 0;
    this[8] = 0;
    this[6] = -1;
    this[7] = -1;
    this[9] = 0;
  }
  return result;
}
