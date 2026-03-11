/*
 * func-name: sub_1010EC30
 * func-address: 0x1010ec30
 * callers: 0x10004d31
 * callees: 0x100016bd, 0x1000671c, 0x100069c9, 0x1000a380, 0x1000ccd9, 0x1000e98a, 0x100110ea, 0x1001466e, 0x102c9d50
 */

int __thiscall sub_1010EC30(int this, int a2)
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
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 56) == 0 )
  {
    sub_1000CCD9();
    return this;
  }
  v6 = *(void **)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) / 56;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - (int)v6) / 56;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (void *)(*(_DWORD *)(a2 + 4) + 56 * sub_1000E98A());
      sub_1000671C(*(_DWORD *)(a2 + 4), (int)v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_100016BD(v11, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1001466E(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_1000E98A();
    if ( (unsigned __int8)sub_100110EA(v12) )
      *(_DWORD *)(this + 8) = sub_100016BD(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  v8 = (void *)sub_1000A380(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), (int)v6);
  sub_100069C9(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 56 * ((*(_DWORD *)(a2 + 8) - v9) / 56);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
