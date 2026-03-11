/*
 * func-name: sub_10061B20
 * func-address: 0x10061b20
 * callers: 0x10060420, 0x100624c0
 * callees: none
 */

void __thiscall sub_10061B20(_WORD *this, unsigned __int16 a2)
{
  int v2; // edx
  int v3; // eax
  unsigned __int16 *v4; // esi
  unsigned __int16 *v5; // eax

  if ( a2 < this[10] )
  {
    v2 = *(_DWORD *)this;
    v3 = 44 * a2;
    if ( *(_WORD *)(*(_DWORD *)this + v3 + 40) != a2 )
    {
      v4 = (unsigned __int16 *)(v3 + v2 + 40);
      v5 = (unsigned __int16 *)(v3 + v2 + 42);
      if ( *v4 == 0xFFFF )
        this[6] = *v5;
      else
        *(_WORD *)(44 * *v4 + v2 + 42) = *v5;
      if ( *v5 == 0xFFFF )
        this[7] = *v4;
      else
        *(_WORD *)(44 * *v5 + v2 + 40) = *v4;
      *v4 = a2;
      *v5 = a2;
      --this[9];
    }
  }
}
