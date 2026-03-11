/*
 * func-name: sub_1004D820
 * func-address: 0x1004d820
 * callers: 0x1004cc00
 * callees: 0x1002c660, 0x1004dbd0, 0x1004de30
 */

int __usercall sub_1004D820@<eax>(int a1@<eax>, int a2@<esi>)
{
  _DWORD *v2; // edi
  int v3; // ebp
  int v5; // [esp+Ch] [ebp-18h] BYREF
  int v6; // [esp+10h] [ebp-14h] BYREF
  _DWORD *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+18h] [ebp-Ch]
  _DWORD *v9; // [esp+1Ch] [ebp-8h]

  sub_1004DE30(&v6, a1);
  v2 = v9;
  v3 = v8;
  v5 = 0;
  sub_1002C660(&v5, v6, v7, v8, v9);
  sub_1004DBD0(a2, &v6, v6, v7, v3, v2);
  return v5;
}
