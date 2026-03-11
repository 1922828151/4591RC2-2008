/*
 * func-name: sub_10060360
 * func-address: 0x10060360
 * callers: none
 * callees: 0x10060030, 0x100619e0
 */

void __thiscall sub_10060360(_WORD *this, unsigned __int16 a2)
{
  _WORD *v2; // edi
  int v3; // ebx
  int v4; // eax

  v2 = this + 12;
  if ( a2 < this[22] )
  {
    v3 = 12 * a2;
    v4 = v3 + *(_DWORD *)v2;
    if ( *(_WORD *)(v4 + 8) != a2 || *(_WORD *)(v4 + 10) == a2 )
    {
      sub_10060030((int)this, a2);
      sub_100619E0(a2);
      *(_WORD *)(*(_DWORD *)v2 + v3 + 10) = v2[8];
      v2[8] = a2;
    }
  }
}
