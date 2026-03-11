/*
 * func-name: sub_10030140
 * func-address: 0x10030140
 * callers: 0x1001e290
 * callees: 0x1000e540, 0x1000e560, 0x1000ee20, 0x10014640, 0x10014910, 0x10034f10
 */

char __userpurge sub_10030140@<al>(_DWORD *a1@<ecx>, int a2@<ebp>, int a3)
{
  int (__stdcall ***v4)(size_t, int); // eax
  void *v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // eax
  unsigned int i; // eax
  int (__stdcall ***v11)(size_t, int); // eax
  int v12; // eax
  unsigned int j; // eax
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // [esp+10h] [ebp-30h] BYREF
  int v17; // [esp+14h] [ebp-2Ch]
  _DWORD v18[3]; // [esp+28h] [ebp-18h] BYREF
  float v19; // [esp+34h] [ebp-Ch]
  int v20; // [esp+38h] [ebp-8h]
  float v21; // [esp+3Ch] [ebp-4h]

  a1[1] = *(_DWORD *)a3;
  v4 = sub_10014910();
  v5 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v4)(v4, 4 * a1[1], 56);
  a1[3] = v5;
  if ( !v5 )
    return 0;
  memset(v5, 0, 4 * a1[1]);
  sub_1000E540(&v16);
  v6 = *(_DWORD *)(a3 + 4);
  v21 = 0.1;
  v7 = *(_DWORD *)(a3 + 12);
  v8 = *(_DWORD *)(a3 + 8);
  v18[0] = v6;
  v18[2] = v7;
  v20 = 0;
  v18[1] = v8;
  LOWORD(v19) = 1;
  if ( !sub_1000EE20(&v16, a2, (int)v18) )
  {
LABEL_3:
    sub_1000E560(&v16);
    return 0;
  }
  for ( i = 0; i < v16; ++i )
  {
    ++*(_WORD *)(a1[3] + 4 * *(_DWORD *)(v17 + 8 * i));
    ++*(_WORD *)(a1[3] + 4 * *(_DWORD *)(v17 + 8 * i + 4));
  }
  if ( *(_BYTE *)(a3 + 16) )
  {
    sub_10014640(a1);
    a1[2] = *(unsigned __int16 *)(a1[3] + 4 * a1[1] - 2) + *(unsigned __int16 *)(a1[3] + 4 * a1[1] - 4);
    v11 = sub_10014910();
    v12 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD, int))**v11)(v11, a1[2], 58);
    a1[4] = v12;
    if ( !v12 )
      goto LABEL_3;
    for ( j = 0; j < v16; ++j )
    {
      v14 = *(_DWORD *)(v17 + 8 * j);
      v15 = *(_DWORD *)(v17 + 8 * j + 4);
      *(_BYTE *)((unsigned __int16)(*(_WORD *)(a1[3] + 4 * v14 + 2))++ + a1[4]) = v15;
      *(_BYTE *)((unsigned __int16)(*(_WORD *)(a1[3] + 4 * v15 + 2))++ + a1[4]) = v14;
    }
    sub_10014640(a1);
  }
  sub_1000E560(&v16);
  return 1;
}
