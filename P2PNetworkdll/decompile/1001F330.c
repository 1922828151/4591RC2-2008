/*
 * func-name: sub_1001F330
 * func-address: 0x1001f330
 * callers: 0x1001f2a0
 * callees: none
 */

int __usercall sub_1001F330@<eax>(int a1@<eax>, int a2@<ebx>, _DWORD *a3@<esi>)
{
  int (__cdecl *v3)(_DWORD *, int, int, _DWORD *); // eax
  int v4; // eax
  int v6; // [esp-Ch] [ebp-10h]
  int v7; // [esp-8h] [ebp-Ch]

  a3[4] += a1;
  a3[6] += a1;
  v3 = (int (__cdecl *)(_DWORD *, int, int, _DWORD *))a3[59];
  v7 = a3[4];
  v6 = a3[3];
  a3[63] = v6;
  a3[7] = v7;
  v4 = v3(a3, v6, v7, a2 == 0 ? a3 + 3 : 0);
  a3[60] = v4;
  if ( v4 )
  {
    a3[62] = a3[61];
    a3[59] = sub_10021C60;
    return 0;
  }
  else
  {
    if ( !a2 )
      (*(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD *))(a3[30] + 48))(a3[30], a3[63], a3[3], a3 + 107);
    return 1;
  }
}
