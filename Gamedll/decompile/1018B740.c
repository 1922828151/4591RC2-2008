/*
 * func-name: sub_1018B740
 * func-address: 0x1018b740
 * callers: 0x10019d2b
 * callees: 0x10001e97, 0x100095b6, 0x1000a28b, 0x1000eb0b, 0x1000ed0e, 0x10016946, 0x1001998e, 0x1001a898, 0x102c9d50
 */

int __thiscall sub_1018B740(int this, int a2)
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
    sub_1000ED0E();
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
      v11 = (void *)(*(_DWORD *)(a2 + 4) + 56 * sub_1000EB0B());
      sub_1000A28B(*(_DWORD *)(a2 + 4), (int)v11, (int)v6);
      *(_DWORD *)(this + 8) = sub_1001998E(v11, *(_DWORD *)(a2 + 8), *(void **)(this + 8));
      return this;
    }
    if ( v6 )
    {
      sub_10016946(v6, *(_DWORD *)(this + 8));
      operator delete(*(void **)(this + 4));
    }
    v12 = sub_1000EB0B();
    if ( (unsigned __int8)sub_10001E97(v12) )
      *(_DWORD *)(this + 8) = sub_1001998E(*(void **)(a2 + 4), *(_DWORD *)(a2 + 8), *(void **)(this + 4));
    return this;
  }
  v8 = (void *)sub_1001A898(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8), (int)v6);
  sub_100095B6(v8, *(_DWORD *)(this + 8));
  v9 = *(_DWORD *)(a2 + 4);
  if ( v9 )
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4) + 56 * ((*(_DWORD *)(a2 + 8) - v9) / 56);
  else
    *(_DWORD *)(this + 8) = *(_DWORD *)(this + 4);
  return this;
}
