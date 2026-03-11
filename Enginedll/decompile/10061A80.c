/*
 * func-name: sub_10061A80
 * func-address: 0x10061a80
 * callers: 0x10060030, 0x10061bf0
 * callees: none
 */

void __thiscall sub_10061A80(_WORD *this, unsigned __int16 a2)
{
  int v2; // edx
  int v3; // eax
  unsigned __int16 v4; // si
  unsigned __int16 *v5; // edi
  unsigned __int16 *v6; // eax

  if ( a2 < this[10] )
  {
    v2 = *(_DWORD *)this;
    v3 = 6 * a2;
    if ( *(_WORD *)(*(_DWORD *)this + v3 + 2) != a2 )
    {
      v4 = *(_WORD *)(v3 + v2 + 2);
      v5 = (unsigned __int16 *)(v3 + v2 + 2);
      v6 = (unsigned __int16 *)(v3 + v2 + 4);
      if ( v4 == 0xFFFF )
        this[6] = *v6;
      else
        *(_WORD *)(v2 + 6 * v4 + 4) = *v6;
      if ( *v6 == 0xFFFF )
        this[7] = *v5;
      else
        *(_WORD *)(v2 + 6 * *v6 + 2) = *v5;
      *v5 = a2;
      *v6 = a2;
      --this[9];
    }
  }
}
