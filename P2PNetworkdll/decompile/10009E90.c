/*
 * func-name: sub_10009E90
 * func-address: 0x10009e90
 * callers: 0x10009890
 * callees: 0x100075a0, 0x10008060, 0x10008240, 0x10008270, 0x10008860, 0x10008fa0, 0x10023bc6
 */

void __stdcall sub_10009E90(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, _DWORD *a8)
{
  _DWORD *v8; // edi
  void (__cdecl *v9)(); // esi
  _DWORD *v10; // esi
  int v11; // [esp+0h] [ebp-30h] BYREF
  int v12; // [esp+18h] [ebp-18h]
  _DWORD *v13; // [esp+1Ch] [ebp-14h]
  int *v14; // [esp+20h] [ebp-10h]
  int v15; // [esp+2Ch] [ebp-4h]

  v14 = &v11;
  v8 = a6;
  v12 = a5;
  v13 = a6;
  v15 = 0;
  while ( 1 )
  {
    if ( a5 && a5 == a7 )
    {
      v9 = invalid_parameter_noinfo;
    }
    else
    {
      v9 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    if ( v8 == a8 )
      break;
    if ( !a5 )
      v9();
    if ( v8 == *(_DWORD **)(a5 + 4) )
      v9();
    v10 = sub_10008FA0(a4, *(_DWORD *)(a4 + 4), (int)(v8 + 2));
    sub_10008860(1u, a1);
    *(_DWORD *)(a4 + 4) = v10;
    *(_DWORD *)v10[1] = v10;
    if ( v8 == *(_DWORD **)(a5 + 4) )
      invalid_parameter_noinfo();
    v8 = (_DWORD *)*v8;
  }
}
