/*
 * func-name: sub_10061D60
 * func-address: 0x10061d60
 * callers: 0x10060300
 * callees: 0x10061350, 0x100619e0
 */

unsigned __int16 __thiscall sub_10061D60(_WORD *this)
{
  unsigned __int16 v2; // di
  int v3; // eax
  unsigned __int16 v4; // ax

  v2 = sub_10061350(this, 0);
  sub_100619E0(this, v2);
  v3 = *(_DWORD *)this + 12 * v2;
  *(_WORD *)(v3 + 10) = -1;
  *(_WORD *)(v3 + 8) = this[7];
  this[7] = v2;
  v4 = *(_WORD *)(v3 + 8);
  if ( v4 == 0xFFFF )
  {
    ++this[9];
    this[6] = v2;
  }
  else
  {
    *(_WORD *)(*(_DWORD *)this + 12 * v4 + 10) = v2;
    ++this[9];
  }
  return v2;
}
