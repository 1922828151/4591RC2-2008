/*
 * func-name: sub_1000FBA0
 * func-address: 0x1000fba0
 * callers: 0x1002fc50
 * callees: 0x1000e540, 0x1000e560, 0x1000ee20, 0x10014910
 */

char __usercall sub_1000FBA0@<al>(_DWORD *a1@<ecx>, int a2@<ebp>)
{
  int v3; // eax
  int v4; // ecx
  int v5; // edx
  int (__thiscall ***v6)(_DWORD, int, int); // eax
  _DWORD *v7; // eax
  unsigned int *v8; // eax
  char result; // al
  int v10; // edi
  int v11; // eax
  _DWORD v12[3]; // [esp+8h] [ebp-18h] BYREF
  char v13; // [esp+14h] [ebp-Ch]
  char v14; // [esp+15h] [ebp-Bh]
  int v15; // [esp+18h] [ebp-8h]
  float v16; // [esp+1Ch] [ebp-4h]

  v16 = 0.1;
  v3 = a1[1];
  v4 = a1[3];
  v5 = a1[2];
  v12[0] = v3;
  v12[2] = 0;
  v12[1] = v4;
  v13 = 1;
  v14 = 1;
  v15 = v5;
  v6 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v7 = (_DWORD *)(**v6)(v6, 24, 17);
  if ( v7 )
    v8 = sub_1000E540(v7);
  else
    v8 = 0;
  a1[22] = v8;
  result = sub_1000EE20(v8, a2, (int)v12);
  if ( !result )
  {
    v10 = a1[22];
    if ( v10 )
    {
      sub_1000E560((_DWORD *)a1[22]);
      v11 = sub_10014910();
      result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v11 + 12))(v11, v10);
      a1[22] = 0;
    }
  }
  return result;
}
