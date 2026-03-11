/*
 * func-name: sub_1014B9D0
 * func-address: 0x1014b9d0
 * callers: 0x10008ea9
 * callees: 0x100029cd, 0x1000bd7a, 0x10014d21, 0x10018e71
 */

int __userpurge sub_1014B9D0@<eax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4, float *a5, float *a6)
{
  int result; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  double v10; // st7
  double v11; // st7
  float v12; // [esp+4h] [ebp-58h]
  int v13; // [esp+8h] [ebp-54h]
  int v14; // [esp+Ch] [ebp-50h]
  int v15[3]; // [esp+10h] [ebp-4Ch] BYREF
  _BYTE v16[64]; // [esp+1Ch] [ebp-40h] BYREF

  result = a4;
  if ( a4 )
  {
    (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 48) + 4))(*(_DWORD *)(a1 + 48), a4);
    v8 = *(_DWORD **)(a1 + 48);
    v8[3] = *(_DWORD *)a5;
    v8[4] = *((_DWORD *)a5 + 1);
    v8[5] = *((_DWORD *)a5 + 2);
    v9 = *(_DWORD **)(a1 + 48);
    v9[6] = *(_DWORD *)a6;
    v9 += 6;
    v9[1] = *((_DWORD *)a6 + 1);
    v9[2] = *((_DWORD *)a6 + 2);
    v12 = *a6 - *a5;
    v10 = a6[1];
    *(float *)v15 = v12;
    *(float *)&v13 = v10 - a5[1];
    v11 = a6[2] - a5[2];
    v15[1] = v13;
    *(float *)&v14 = v11;
    v15[2] = v14;
    sub_100029CD();
    qmemcpy((void *)(*(_DWORD *)(a1 + 48) + 48), (const void *)sub_10018E71(v16, (int)v15), 0x40u);
    sub_10014D21(a2, a3);
    sub_1000BD7A(1);
    return *(_DWORD *)(a1 + 48);
  }
  return result;
}
