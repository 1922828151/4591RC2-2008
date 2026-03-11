/*
 * func-name: sub_10009360
 * func-address: 0x10009360
 * callers: 0x100076e0, 0x10007ba0, 0x10008960
 * callees: 0x10008f40, 0x100091a0, 0x10009fb0, 0x10023bc6
 */

int __stdcall sub_10009360(_DWORD *a1, int a2)
{
  char *v2; // eax
  char *v3; // edi
  int result; // eax
  int v5; // [esp-4h] [ebp-28h]
  int v6; // [esp+0h] [ebp-24h] BYREF
  int v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v2 = (char *)sub_10008F40(9u);
  v9 = 0;
  v3 = v2;
  LOBYTE(v7) = 0;
  v5 = v7;
  a1[3] = v2 + 72;
  a1[1] = v2;
  a1[2] = v2;
  result = sub_10009FB0(9, a2, a1, v5);
  a1[2] = v3 + 72;
  return result;
}
