/*
 * func-name: sub_10011510
 * func-address: 0x10011510
 * callers: 0x10006780, 0x10012210, 0x100122d0, 0x10012750, 0x100127c0, 0x10012900, 0x10012d70, 0x100154c0, 0x1002d2e0, 0x1002d760, 0x1002dc30, 0x1002dcb0, 0x1002dd40, 0x1002ea10, 0x100306d0, 0x10030b70, 0x10030cb0, 0x100368e0, 0x1004f650, 0x100711d0, 0x100de040, 0x100debd0, 0x10112180, 0x101121b0, 0x10176630, 0x10177850
 * callees: 0x1000b7e0, 0x1000b950, 0x1000c3f0, 0x1000cff0, 0x1000dad0, 0x10010020, 0x100993b0, 0x101a2500
 */

int __thiscall sub_10011510(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ebx
  unsigned int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 28) == 0 )
  {
    sub_10010020((int *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 28;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - v6) / 28;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = *(_DWORD *)(a2 + 4) + 28 * sub_100993B0(this);
      sub_1000B950(*(_DWORD *)(a2 + 4), v11, v6);
      *(_DWORD *)(this + 8) = sub_1000CFF0(v11, *(_DWORD *)(a2 + 8), *(CREControl **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1000DAD0(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_100993B0(a2);
    if ( sub_1000C3F0((_DWORD *)this, v12) )
      *(_DWORD *)(this + 8) = sub_1000CFF0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(CREControl **)(this + 4));
    return this;
  }
  v8 = sub_1000B7E0(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), v6);
  sub_1000DAD0(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    v9 = (*(_DWORD *)(a2 + 8) - v9) / 28;
  *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 28 * v9;
  return this;
}
