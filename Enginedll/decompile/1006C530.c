/*
 * func-name: sub_1006C530
 * func-address: 0x1006c530
 * callers: 0x1006f170, 0x100d0360
 * callees: none
 */

int __thiscall sub_1006C530(int this, int a2)
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
      v9 = realloc(v5, 532 * v2);
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
