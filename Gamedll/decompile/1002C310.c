/*
 * func-name: sub_1002C310
 * func-address: 0x1002c310
 * callers: 0x1000d5c1
 * callees: 0x100076b2, 0x10007914, 0x1000b014, 0x1000cf45, 0x1000d008, 0x10011b7b, 0x10013dae, 0x102c9d50
 */

int __thiscall sub_1002C310(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  void *v6; // edi
  unsigned int v7; // eax
  void *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // ebx
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 28) == 0 )
  {
    sub_1000CF45();
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
      v11 = (void *)(*(_DWORD *)(a2 + 4) + 28 * sub_10011B7B());
      sub_10013DAE(*(_DWORD *)(a2 + 4), (int)v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_1000D008(v11, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1000B014(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_10011B7B();
    if ( (unsigned __int8)sub_100076B2(v12) )
      *(_DWORD *)(this + 8) = sub_1000D008(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  v8 = (void *)sub_10007914(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), (int)v6);
  sub_1000B014(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    v9 = (*(_DWORD *)(a2 + 8) - v9) / 28;
  *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 28 * v9;
  return this;
}
