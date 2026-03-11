/*
 * func-name: sub_1000DBC0
 * func-address: 0x1000dbc0
 * callers: 0x1000fe50, 0x1000ff50, 0x10010ec0, 0x10139150
 * callees: 0x1017a0b0, 0x101a2500
 */

void __thiscall sub_1000DBC0(int this)
{
  int v2; // esi
  int i; // edi

  v2 = *(_DWORD *)(this + 4);
  if ( v2 )
  {
    for ( i = *(_DWORD *)(this + 8); v2 != i; v2 += 140 )
      sub_1017A0B0(v2 + 100);
    operator delete(*(void **)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
}
