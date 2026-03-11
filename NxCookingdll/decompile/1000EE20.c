/*
 * func-name: sub_1000EE20
 * func-address: 0x1000ee20
 * callers: 0x1000f360, 0x1000fba0, 0x1001efc0, 0x1002e590, 0x10030140
 * callees: 0x1000e060, 0x1000e370, 0x1000e570, 0x10014910
 */

char __userpurge sub_1000EE20@<al>(unsigned int *a1@<ecx>, int a2@<ebp>, int a3)
{
  char v4; // cl
  char v5; // bl
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax

  v4 = 1;
  if ( *(_DWORD *)(a3 + 16) )
  {
    v5 = 1;
  }
  else
  {
    v4 = *(_BYTE *)(a3 + 12);
    v5 = *(_BYTE *)(a3 + 13);
  }
  if ( v4 && !sub_1000E060(a1, *(_DWORD *)a3, *(unsigned int **)(a3 + 4), *(_DWORD *)(a3 + 8)) )
    return 0;
  if ( v5 && !sub_1000E370(a1, *(_DWORD *)a3, *(unsigned int **)(a3 + 4), *(_DWORD *)(a3 + 8)) )
    return 0;
  v7 = *(_DWORD *)(a3 + 16);
  if ( v7 )
  {
    if ( !sub_1000E570(
            a1,
            v5,
            a2,
            (int)a1,
            *(_DWORD *)a3,
            *(_DWORD *)(a3 + 4),
            *(_DWORD *)(a3 + 8),
            v7,
            *(float *)(a3 + 20)) )
      return 0;
  }
  if ( !*(_BYTE *)(a3 + 12) && a1[3] )
  {
    v8 = sub_10014910();
    (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v8 + 12))(v8, a1[3]);
    a1[3] = 0;
  }
  if ( !*(_BYTE *)(a3 + 13) )
  {
    if ( a1[4] )
    {
      v9 = sub_10014910();
      (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v9 + 12))(v9, a1[4]);
      a1[4] = 0;
    }
    if ( a1[5] )
    {
      v10 = sub_10014910();
      (*(void (__thiscall **)(int, unsigned int))(*(_DWORD *)v10 + 12))(v10, a1[5]);
      a1[5] = 0;
    }
  }
  return 1;
}
