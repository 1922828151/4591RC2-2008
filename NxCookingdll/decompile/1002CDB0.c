/*
 * func-name: sub_1002CDB0
 * func-address: 0x1002cdb0
 * callers: 0x1002d130
 * callees: 0x100149b0
 */

int __cdecl sub_1002CDB0(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v6; // ecx
  int v7; // ebp
  int v8; // eax
  _DWORD *v9; // esi
  int v10; // ebp
  int result; // eax
  int v12; // [esp+Ch] [ebp+4h]
  int v13; // [esp+10h] [ebp+8h]

  v6 = *(_DWORD *)(a1[2] + 4 * a2);
  if ( v6 == -1 )
  {
    v7 = *(_DWORD *)(*a1 + 12 * a2);
    v8 = *a1 + 12 * a2;
    v9 = (_DWORD *)a1[5];
    v12 = *(_DWORD *)(v8 + 4);
    v13 = *(_DWORD *)(v8 + 8);
    if ( v9[1] == *v9 )
      sub_100149B0(v9, 1);
    *(_DWORD *)(v9[2] + 4 * v9[1]++) = v7;
    if ( v9[1] == *v9 )
      sub_100149B0(v9, 1);
    *(_DWORD *)(v9[2] + 4 * v9[1]++) = v12;
    if ( v9[1] == *v9 )
      sub_100149B0(v9, 1);
    *(_DWORD *)(v9[2] + 4 * v9[1]++) = v13;
    v10 = a1[3];
    if ( v9[1] == *v9 )
      sub_100149B0(v9, 1);
    *(_DWORD *)(v9[2] + 4 * v9[1]++) = v10;
    result = (int)a3;
    *(_DWORD *)(a1[1] + 4 * (a4 + 12 * a1[4])) = *a3;
    *(_DWORD *)(a1[2] + 4 * a2) = (*a3)++;
  }
  else
  {
    result = a4 + 12 * a1[4];
    *(_DWORD *)(a1[1] + 4 * result) = v6;
  }
  return result;
}
