/*
 * func-name: sub_1011D520
 * func-address: 0x1011d520
 * callers: 0x1000754a
 * callees: 0x10002ccf, 0x100078f1, 0x1000b933, 0x1000fdfd, 0x10011cd4, 0x100179d1, 0x100187eb, 0x102c9d50
 */

int __thiscall sub_1011D520(int this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  int v6; // ebx
  unsigned int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  void *v11; // edi
  int v12; // eax

  if ( this == a2 )
    return this;
  v3 = *(_DWORD *)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - v3) / 936) == 0 )
  {
    sub_100179D1();
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) / 936;
  else
    v7 = 0;
  if ( v4 > v7 )
  {
    if ( v6 )
      v10 = (*(_DWORD *)(this + 12) - v6) / 936;
    else
      v10 = 0;
    if ( v4 <= v10 )
    {
      v11 = (void *)(*(_DWORD *)(a2 + 4) + 936 * sub_1000FDFD());
      sub_100187EB(*(_DWORD *)(a2 + 4), (int)v11, v6);
      *(_DWORD *)(this + 8) = sub_100078F1(v11, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_1000B933(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_1000FDFD();
    if ( (unsigned __int8)sub_10002CCF(v12) )
      *(_DWORD *)(this + 8) = sub_100078F1(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  v8 = sub_10011CD4(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), v6);
  sub_1000B933(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 936 * ((*(_DWORD *)(a2 + 8) - v9) / 936);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
