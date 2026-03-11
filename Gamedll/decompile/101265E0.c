/*
 * func-name: sub_101265E0
 * func-address: 0x101265e0
 * callers: 0x10016d24
 * callees: 0x100026ee, 0x10009dd1, 0x1000de9a, 0x100192d1, 0x102c9d50
 */

int __thiscall sub_101265E0(int this, int a2)
{
  char *v3; // ebx
  unsigned int v4; // edx
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // ecx
  unsigned int v10; // ecx
  int v11; // ecx
  char *v12; // ebx
  int v13; // ecx
  int v14; // eax

  if ( this == a2 )
    return this;
  v3 = *(char **)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - (int)v3) >> 2) == 0 )
  {
    sub_10009DD1((void *)this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) >> 2;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_1000DE9A(v3, *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    v8 = *(_DWORD *)(a2 + 4);
    if ( v8 )
      v9 = *(_DWORD *)(this + 4) + 4 * ((*(_DWORD *)(a2 + 8) - v8) >> 2);
    else
      v9 = *(_DWORD *)(this + 4);
    *(_DWORD *)(this + 8) = v9;
    return this;
  }
  if ( v6 )
    v10 = (*(_DWORD *)(this + 12) - v6) >> 2;
  else
    v10 = 0;
  if ( v4 > v10 )
  {
    if ( v6 )
      operator delete(*(void **)(this + 4));
    v13 = *(_DWORD *)(a2 + 4);
    if ( v13 )
      v14 = (*(_DWORD *)(a2 + 8) - v13) >> 2;
    else
      v14 = 0;
    if ( (unsigned __int8)sub_100026EE(v14) )
      *(_DWORD *)(this + 8) = sub_100192D1(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  if ( v6 )
    v11 = (*(_DWORD *)(this + 8) - v6) >> 2;
  else
    v11 = 0;
  v12 = &v3[4 * v11];
  sub_1000DE9A(*(void **)(a2 + 4), (int)v12, *(void **)(this + 4));
  *(_DWORD *)(this + 8) = sub_100192D1(v12, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
  return this;
}
