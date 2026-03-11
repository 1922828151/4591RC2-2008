/*
 * func-name: sub_10299550
 * func-address: 0x10299550
 * callers: 0x1000f1b4
 * callees: 0x10002eff, 0x1000785b, 0x10009840, 0x1000f8e9, 0x10012a99, 0x1001321e, 0x10014bcd, 0x102c9d50
 */

int __thiscall sub_10299550(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  void *v6; // ebx
  unsigned int v7; // eax
  void *v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 76) == 0 )
  {
    sub_1001321E();
    return this;
  }
  v6 = *(void **)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - (int)v6) / 76;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - (int)v6) / 76;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = *(_DWORD *)(a2 + 4) + 76 * sub_1000F8E9();
      sub_10014BCD(*(_DWORD *)(a2 + 4), v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_10009840(v11, *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1000785B(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_1000F8E9();
    if ( (unsigned __int8)sub_10012A99(v12) )
      *(_DWORD *)(this + 8) = sub_10009840(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
    return this;
  }
  v8 = (void *)sub_10014BCD(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), *(_DWORD *)(this + 4));
  sub_10002EFF(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 76 * ((*(_DWORD *)(a2 + 8) - v9) / 76);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
