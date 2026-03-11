/*
 * func-name: sub_1006C5D0
 * func-address: 0x1006c5d0
 * callers: 0x10034c30, 0x100360e0, 0x100af8e0, 0x100af9f0, 0x100b0270, 0x100b0350, 0x100b07b0, 0x100b0a20, 0x100b13f0, 0x100b1d20, 0x100b1e40, 0x100b1f60, 0x100b3510, 0x100b5470, 0x100b5550, 0x100b5600, 0x100c7fa0, 0x100c8100, 0x100c82d0, 0x100cbee0, 0x100cc020, 0x100cc180, 0x100cc300, 0x100cc430, 0x100cc940, 0x100ce8d0
 * callees: none
 */

int __thiscall sub_1006C5D0(int this, int a2)
{
  int v2; // edi
  void *v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  void *v9; // eax

  v2 = a2;
  if ( a2 < 0 )
    return -2147024809;
  if ( a2 )
  {
    v5 = *(void **)this;
    if ( !*(_DWORD *)this || a2 > *(_DWORD *)(this + 8) )
    {
      v6 = *(_DWORD *)(this + 8);
      v7 = 16;
      if ( v6 )
        v7 = *(_DWORD *)(this + 8);
      v8 = v7 + v6;
      if ( a2 <= v8 )
        v2 = v8;
      v9 = realloc(v5, 4 * v2);
      if ( !v9 )
        return -2147024882;
      *(_DWORD *)this = v9;
      *(_DWORD *)(this + 8) = v2;
    }
    return 0;
  }
  else
  {
    if ( *(_DWORD *)this )
    {
      free(*(void **)this);
      *(_DWORD *)this = 0;
    }
    *(_DWORD *)(this + 8) = 0;
    *(_DWORD *)(this + 4) = 0;
    return 0;
  }
}
