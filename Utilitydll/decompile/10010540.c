/*
 * func-name: sub_10010540
 * func-address: 0x10010540
 * callers: 0x10010480
 * callees: 0x100072a0, 0x10010780, 0x10010840, 0x10010b20, 0x10014070, 0x10019586
 */

unsigned int __stdcall sub_10010540(int a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  _DWORD **v7; // eax
  unsigned int result; // eax
  int v9; // ecx
  int v10; // ecx
  _DWORD *v11; // ebx
  unsigned int v12; // ebx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // ebx
  _DWORD v16[9]; // [esp+0h] [ebp-48h] BYREF
  _DWORD *v17; // [esp+24h] [ebp-24h]
  int v18; // [esp+28h] [ebp-20h]
  _DWORD *v19; // [esp+2Ch] [ebp-1Ch]
  unsigned int v20; // [esp+34h] [ebp-14h]
  _DWORD *v21; // [esp+38h] [ebp-10h]
  int v22; // [esp+44h] [ebp-4h]
  unsigned int v23; // [esp+50h] [ebp+8h]

  v21 = v16;
  v2 = a1 + 4;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2;
  v5 = *(_DWORD *)(a2 + 20);
  if ( v5 )
    v6 = (*(_DWORD *)(a2 + 24) - v5) >> 3;
  else
    v6 = 0;
  v20 = a1 + 16;
  sub_100072A0(a1 + 16, v6, a1 + 4, v3);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  sub_10010840(v2);
  v22 = 0;
  v7 = *(_DWORD ***)(a2 + 8);
  v18 = a2 + 4;
  v19 = *v7;
  v16[8] = a2 + 4;
  v16[6] = a1 + 4;
  sub_10010B20(a1 + 4, a1 + 4, *(_DWORD *)(a1 + 8), a2 + 4, v19, a2 + 4, v7);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  v22 = -1;
  v17 = **(_DWORD ***)(a1 + 8);
  v19 = **(_DWORD ***)(a2 + 8);
  v23 = 0;
  while ( 1 )
  {
    result = v20;
    v9 = *(_DWORD *)(v20 + 4);
    if ( !v9 )
      break;
    result = (*(_DWORD *)(v20 + 8) - v9) >> 3;
    if ( v23 >= result )
      break;
    v10 = *(_DWORD *)(v4 + 20);
    if ( !v10 || v23 >= (*(_DWORD *)(v4 + 24) - v10) >> 3 )
      invalid_parameter_noinfo();
    v11 = (_DWORD *)(8 * v23 + *(_DWORD *)(v4 + 20));
    if ( a2 + 4 != *v11 )
      invalid_parameter_noinfo();
    if ( v19 == (_DWORD *)v11[1] )
    {
      v12 = v20;
      v13 = *(_DWORD *)(v20 + 4);
      if ( !v13 || v23 >= (*(_DWORD *)(v20 + 8) - v13) >> 3 )
        invalid_parameter_noinfo();
      v14 = *(_DWORD *)(v12 + 4);
      *(_DWORD *)(v14 + 8 * v23) = v2;
      *(_DWORD *)(v14 + 8 * v23++ + 4) = v17;
      v4 = a2;
    }
    else
    {
      v15 = v17;
      if ( v17 == *(_DWORD **)(v2 + 4) )
        invalid_parameter_noinfo();
      v17 = (_DWORD *)*v15;
      if ( v19 == *(_DWORD **)(a2 + 8) )
        invalid_parameter_noinfo();
      v19 = (_DWORD *)*v19;
      v4 = a2;
    }
  }
  return result;
}
