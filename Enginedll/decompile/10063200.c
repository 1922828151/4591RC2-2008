/*
 * func-name: sub_10063200
 * func-address: 0x10063200
 * callers: 0x10060bc0, 0x10060e00, 0x100632e0, 0x10063450
 * callees: 0x10063110, 0x101a2534
 */

_DWORD *__thiscall sub_10063200(_DWORD *this, int a2, char a3, int a4)
{
  void *v5; // eax
  int v6; // eax

  *this = &CEnumBase::`vftable';
  this[1] = a4;
  this[2] = a2;
  *((_BYTE *)this + 12) = a3;
  this[4] = 0;
  if ( dword_10284C48 > 0 )
  {
    v5 = operator new(0x20u);
    if ( v5 )
      v6 = sub_10063110((int)v5, 64, 0, 0, (int)sub_1005F0E0, (int)sub_1005F100);
    else
      v6 = 0;
    this[4] = v6;
  }
  ++dword_10284C48;
  return this;
}
