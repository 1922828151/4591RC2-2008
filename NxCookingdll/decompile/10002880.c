/*
 * func-name: sub_10002880
 * func-address: 0x10002880
 * callers: 0x10002a80, 0x10002b70, 0x10002c60, 0x10002d40, 0x10002e20, 0x10002f00, 0x10002fe0, 0x10003120, 0x10003250, 0x10003340
 * callees: 0x10001830
 */

bool __thiscall sub_10002880(_DWORD *this, int a2)
{
  int v2; // esi
  int v5; // eax
  size_t v6; // edi

  v2 = a2;
  a2 = *(_DWORD *)(a2 + 24);
  if ( sub_10001830(this, (int)&a2, 4u) != 4 )
    return 0;
  v5 = *(_DWORD *)(v2 + 16);
  if ( !v5 )
    v5 = v2;
  v6 = *(_DWORD *)(v2 + 24);
  return sub_10001830(this, v5, v6) == v6;
}
