/*
 * func-name: sub_1002C060
 * func-address: 0x1002c060
 * callers: 0x1002db30
 * callees: 0x10012f90, 0x10014910, 0x10014950, 0x10014b50, 0x10035300
 */

char __thiscall sub_1002C060(int this)
{
  int v3; // ebx
  unsigned int v4; // ebp
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  unsigned int v8; // ebx
  int (__stdcall ***v9)(size_t, int); // eax
  char *v10; // edi
  int (__stdcall ***v11)(size_t, int); // eax
  int v12; // [esp+Ch] [ebp-10h] BYREF
  unsigned int v13; // [esp+10h] [ebp-Ch]
  void *Src; // [esp+14h] [ebp-8h]

  if ( !*(_BYTE *)(this + 282) )
    return 1;
  v3 = *(_DWORD *)(this + 212);
  sub_10014950((float *)&v12);
  v4 = 0;
  if ( *(_DWORD *)(this + 224) )
  {
    v5 = 0;
    do
    {
      v6 = v5 + *(_DWORD *)(this + 248);
      if ( !*(_DWORD *)(v6 + 28) )
      {
        if ( !*(_BYTE *)(this + 289) )
        {
          sub_10012F90(
            &v12,
            (float *)(*(_DWORD *)(this + 236) + 12 * *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(v6 + 12))));
          sub_10012F90(
            &v12,
            (float *)(*(_DWORD *)(this + 236)
                    + 12 * *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(*(_DWORD *)(this + 248) + v5 + 16))));
          sub_10012F90(
            &v12,
            (float *)(*(_DWORD *)(this + 236)
                    + 12 * *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(*(_DWORD *)(this + 248) + v5 + 20))));
          *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(*(_DWORD *)(this + 248) + v5 + 12)) = v3;
          v7 = v3 + 1;
          *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(*(_DWORD *)(this + 248) + v5 + 16)) = v7++;
          *(_DWORD *)(*(_DWORD *)(this + 252) + 12 * *(_DWORD *)(*(_DWORD *)(this + 248) + v5 + 20)) = v7;
          v3 = v7 + 1;
        }
        *(_DWORD *)(*(_DWORD *)(this + 248) + v5 + 28) = -1;
      }
      ++v4;
      v5 += 48;
    }
    while ( v4 < *(_DWORD *)(this + 224) );
  }
  v8 = v13 / 3;
  if ( v13 / 3 )
  {
    v9 = sub_10014910();
    v10 = (char *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, _DWORD))**v9)(
                    v9,
                    12 * (v8 + *(_DWORD *)(this + 212)),
                    0);
    if ( !v10 )
    {
      sub_10014B50((float *)&v12);
      return 0;
    }
    memcpy_0(v10, *(const void **)(this + 236), 12 * *(_DWORD *)(this + 212));
    memcpy_0(&v10[12 * *(_DWORD *)(this + 212)], Src, 12 * v8);
    if ( *(_DWORD *)(this + 236) )
    {
      v11 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v11)[3])(v11, *(_DWORD *)(this + 236));
      *(_DWORD *)(this + 236) = 0;
    }
    *(_DWORD *)(this + 212) += v8;
    *(_DWORD *)(this + 236) = v10;
  }
  sub_10014B50((float *)&v12);
  return 1;
}
