/*
 * func-name: sub_100268D0
 * func-address: 0x100268d0
 * callers: 0x10029a50, 0x100306d0
 * callees: 0x1000c4a0, 0x100521e0, 0x10052490, 0x1006bd90, 0x1006ca30, 0x101466d0, 0x101a2500
 */

int __thiscall sub_100268D0(int this, int a2)
{
  int v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  int v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 )
    return this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( !v4 || (v5 = (*(_DWORD *)(a2 + 8) - v4) / 12) == 0 )
  {
    sub_10052490(this);
    return this;
  }
  v7 = *(_DWORD *)(this + 4);
  if ( v7 )
    v8 = (*(_DWORD *)(this + 8) - v7) / 12;
  else
    v8 = 0;
  if ( v5 > v8 )
  {
    if ( v7 )
      v11 = (*(_DWORD *)(this + 12) - v7) / 12;
    else
      v11 = 0;
    if ( v5 > v11 )
    {
      if ( v7 )
        operator delete(*(void **)(this + 4));
      v14 = sub_1006BD90(a2);
      if ( !sub_1000C4A0((_DWORD *)this, v14) )
        return this;
      v12 = *(_DWORD *)(this + 4);
      v13 = *(_DWORD *)(a2 + 4);
    }
    else
    {
      v15 = v4 + 12 * sub_1006BD90(this);
      sub_100521E0(v4, v15, v7);
      v12 = *(_DWORD *)(this + 8);
      v13 = v15;
    }
    *(_DWORD *)(this + 8) = sub_101466D0(v13, *(_DWORD *)(a2 + 8), v12);
    return this;
  }
  sub_1006CA30(v4, *(_DWORD *)(a2 + 8), v7);
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    v10 = *(_DWORD *)(this + 4) + 12 * ((*(_DWORD *)(a2 + 8) - v9) / 12);
  else
    v10 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 8) = v10;
  return this;
}
