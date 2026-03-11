/*
 * func-name: sub_10017320
 * func-address: 0x10017320
 * callers: 0x10017e30
 * callees: 0x100170f0
 */

void __thiscall sub_10017320(unsigned int *this, unsigned __int8 (__cdecl *a2)(unsigned int, _DWORD, int), int a3)
{
  if ( a2 )
  {
    if ( a2(this[1], 0, a3) )
      sub_100170F0(this[1], a2, a3);
  }
}
