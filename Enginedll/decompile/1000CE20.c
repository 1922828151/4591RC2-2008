/*
 * func-name: ??4?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@QAEAAV01@ABV01@@Z
 * func-address: 0x1000ce20
 * callers: 0x100122d0, 0x10020f40, 0x1002da40, 0x1002ea10, 0x100306d0, 0x100367a0, 0x100368e0, 0x1003e460, 0x1008e470, 0x100ef520, 0x10138500, 0x10166120
 * callees: 0x1000c210, 0x1003b6b0, 0x10057ee0, 0x10108bc0, 0x101a2500
 */

int __thiscall std::vector<Material *>::operator=(int this, int a2)
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
  unsigned int v14; // eax

  if ( this == a2 )
    return this;
  v3 = *(char **)(a2 + 4);
  if ( !v3 || (v4 = (*(_DWORD *)(a2 + 8) - (int)v3) >> 2) == 0 )
  {
    std::vector<Model *>::clear(this);
    return this;
  }
  v6 = *(_DWORD *)(this + 4);
  if ( v6 )
    v7 = (*(_DWORD *)(this + 8) - v6) >> 2;
  else
    v7 = 0;
  if ( v4 <= v7 )
  {
    sub_10108BC0(v3, *(_DWORD *)(a2 + 8), *(void **)(this + 4));
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
    if ( std::vector<Material *>::_Buy((_DWORD *)this, v14) )
      *(_DWORD *)(this + 8) = sub_1003B6B0(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  if ( v6 )
    v11 = (*(_DWORD *)(this + 8) - v6) >> 2;
  else
    v11 = 0;
  v12 = &v3[4 * v11];
  sub_10108BC0(*(void **)(a2 + 4), (int)v12, *(void **)(this + 4));
  *(_DWORD *)(this + 8) = sub_1003B6B0(v12, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
  return this;
}
