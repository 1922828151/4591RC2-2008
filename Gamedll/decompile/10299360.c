/*
 * func-name: sub_10299360
 * func-address: 0x10299360
 * callers: 0x10005be6
 * callees: 0x100089a9, 0x1000a83f, 0x1000b645, 0x1000b9b0, 0x10012fa3, 0x100155b4, 0x10017530, 0x102c9d50
 */

int __thiscall sub_10299360(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  void *v6; // edi
  unsigned int v7; // eax
  void *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // ebx
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 28) == 0 )
  {
    sub_100089A9();
    return this;
  }
  v6 = *(void **)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) / 28;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - (int)v6) / 28;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = *(_DWORD *)(a2 + 4) + 28 * sub_1000A83F();
      sub_100155B4(*(_DWORD *)(a2 + 4), v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_1000B645(v11, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_10017530(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_1000A83F();
    if ( (unsigned __int8)sub_1000B9B0(v12) )
      *(_DWORD *)(this + 8) = sub_1000B645(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    return this;
  }
  v8 = (void *)sub_10012FA3(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), (int)v6);
  sub_10017530(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    v9 = (*(_DWORD *)(a2 + 8) - v9) / 28;
  *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 28 * v9;
  return this;
}
