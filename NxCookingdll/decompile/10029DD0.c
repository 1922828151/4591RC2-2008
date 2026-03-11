/*
 * func-name: sub_10029DD0
 * func-address: 0x10029dd0
 * callers: 0x1002ad60
 * callees: 0x10026de0, 0x100295d0
 */

int __usercall sub_10029DD0@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
        int a4,
        int a5,
        _DWORD *a6,
        int *a7,
        int a8)
{
  int result; // eax
  int v9; // ebp
  int v10; // esi
  int v11; // ecx
  int v12; // eax
  int i; // edi
  int v14; // ebx
  int v15; // eax
  int v16; // edx
  int v17; // [esp+4h] [ebp-Ch] BYREF
  int v18; // [esp+8h] [ebp-8h]
  int v19; // [esp+Ch] [ebp-4h]

  result = sub_100295D0(a1, a2, a3, a4, a5, a8);
  if ( result )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v18 = 0;
    v19 = 0;
    v17 = 0;
    if ( dword_1005B474 > 0 )
    {
      v12 = dword_1005B470;
      do
      {
        if ( *(_DWORD *)(v12 + 4 * v9) )
        {
          for ( i = 0; i < 12; i += 4 )
          {
            v14 = *(_DWORD *)(i + *(_DWORD *)(v12 + 4 * v9));
            if ( v10 == v11 )
            {
              v15 = 2 * v11;
              if ( !v11 )
                v15 = 16;
              sub_10026DE0(&v17, v15);
              v10 = v18;
              v11 = v19;
            }
            *(_DWORD *)(v17 + 4 * v10) = v14;
            v12 = dword_1005B470;
            v18 = ++v10;
          }
          v16 = *(_DWORD *)(dword_1005B470 + 4 * v9);
          if ( v16 )
          {
            *(_DWORD *)(dword_1005B470 + 4 * *(_DWORD *)(v16 + 24)) = 0;
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v16);
            v12 = dword_1005B470;
            v11 = v19;
          }
        }
        ++v9;
      }
      while ( v9 < dword_1005B474 );
    }
    *a7 = v10 / 3;
    *a6 = v17;
    if ( dword_1005B470 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, dword_1005B470);
      dword_1005B470 = 0;
    }
    dword_1005B478 = 0;
    dword_1005B474 = 0;
    return 1;
  }
  return result;
}
