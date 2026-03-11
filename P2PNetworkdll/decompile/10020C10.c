/*
 * func-name: sub_10020C10
 * func-address: 0x10020c10
 * callers: 0x10020f30
 * callees: 0x1001ef20, 0x10020d60, 0x10022450, 0x10023030, 0x100230d0
 */

int __usercall sub_10020C10@<eax>(int a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4)
{
  int result; // eax
  int v7; // eax
  int v8; // [esp-20h] [ebp-44h]
  int v9; // [esp+10h] [ebp-14h] BYREF
  int v10; // [esp+14h] [ebp-10h] BYREF
  int v11; // [esp+18h] [ebp-Ch] BYREF
  _DWORD *v12; // [esp+1Ch] [ebp-8h]
  int v13; // [esp+20h] [ebp-4h] BYREF

  v9 = 0;
  v11 = 0;
  v12 = a2 + 61;
  v8 = a2[30];
  v10 = -1;
  if ( !sub_1001EF20(a3, v8, a4, a1, a2 + 61, &v13, &v9, &v11, &v10) )
    return 2;
  if ( !a3 && v10 == 1 )
    a2[95] = 1;
  if ( a2[17] )
    sub_10022450(a4);
  if ( a2[51] )
    return 0;
  if ( v11 )
  {
    if ( *(_DWORD *)(v11 + 64) != *(_DWORD *)(a2[30] + 64) )
    {
      *v12 = v9;
      return 19;
    }
    a2[30] = v11;
    return 0;
  }
  if ( !v9 )
    return 0;
  (*(void (__cdecl **)(_DWORD, int))(a2[30] + 28))(a2[30], v9);
  if ( !sub_10023030(v9) )
    return 1;
  v7 = sub_100230D0();
  if ( !v7 )
    return 1;
  result = sub_10020D60(v7);
  a2[112] = a2[113];
  if ( result == 18 )
    *v12 = v9;
  return result;
}
