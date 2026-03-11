/*
 * func-name: sub_10018150
 * func-address: 0x10018150
 * callers: 0x100175f0, 0x10017620
 * callees: 0x100074b0, 0x10009990, 0x1000a870, 0x10018470, 0x10018670, 0x10018f30
 */

int __usercall sub_10018150@<eax>(int a1@<ebx>, int a2@<esi>)
{
  int v2; // edi
  int v3; // ebp
  int v4; // eax
  int *v5; // eax
  int v7; // [esp+10h] [ebp-74h] BYREF
  int v8; // [esp+14h] [ebp-70h]
  _BYTE v9[4]; // [esp+18h] [ebp-6Ch] BYREF
  int v10; // [esp+1Ch] [ebp-68h]
  _BYTE v11[40]; // [esp+24h] [ebp-60h] BYREF
  _BYTE v12[44]; // [esp+4Ch] [ebp-38h] BYREF
  int v13; // [esp+80h] [ebp-4h]

  sub_10018470(&v7, a1);
  v2 = v7;
  v10 = *(_DWORD *)(a2 + 8);
  if ( !v7 || v7 != a2 + 4 )
    invalid_parameter_noinfo();
  v3 = v8;
  if ( v8 == v10 )
  {
    sub_10009990((int)v11);
    v13 = 0;
    v4 = sub_10018F30(v12, a1);
    LOBYTE(v13) = 1;
    v5 = (int *)sub_10018670(a2, v9, v4);
    v2 = *v5;
    v3 = v5[1];
    LOBYTE(v13) = 0;
    sub_1000A870((int)v12);
    v13 = -1;
    sub_100074B0((int)v11);
  }
  if ( !v2 )
    invalid_parameter_noinfo();
  if ( v3 == *(_DWORD *)(v2 + 4) )
    invalid_parameter_noinfo();
  return v3 + 12;
}
