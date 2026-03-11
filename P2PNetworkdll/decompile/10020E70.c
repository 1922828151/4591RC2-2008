/*
 * func-name: sub_10020E70
 * func-address: 0x10020e70
 * callers: 0x1001ef60
 * callees: 0x1001edd0, 0x10020d60, 0x10020f30
 */

int __cdecl sub_10020E70(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  int result; // eax
  int v7; // ebx
  int (__cdecl **v8)(_DWORD, int, int, int *); // eax
  int v9; // ebp
  int v10; // eax
  int v11; // [esp-Ch] [ebp-20h]
  int v12; // [esp-8h] [ebp-1Ch]

  v4 = (_DWORD *)a1;
  v5 = (_DWORD *)(a1 + 120);
  if ( sub_1001EDD0(a1 + 124, (_DWORD *)(a1 + 120), *(char **)(a1 + 204)) || (result = sub_10020D60(v4, v4[51])) == 0 )
  {
    v7 = a3;
    v8 = (int (__cdecl **)(_DWORD, int, int, int *))*v5;
    v9 = a2;
    v12 = a3;
    v11 = a2;
    v4[59] = sub_10020EF0;
    v10 = (*v8)(v8, v11, v12, &a1);
    return sub_10020F30(v4, *v5, v9, v7, v10, a1, a4);
  }
  return result;
}
