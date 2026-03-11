/*
 * func-name: sub_1000DB10
 * func-address: 0x1000db10
 * callers: 0x1000d0b0
 * callees: 0x10008910, 0x1000dc70, 0x1000dd30
 */

int __usercall sub_1000DB10@<eax>(int a1@<ecx>, int a2@<eax>)
{
  int v3; // esi
  int v5; // [esp+Ch] [ebp-14h] BYREF
  int v6; // [esp+10h] [ebp-10h] BYREF
  void *v7; // [esp+14h] [ebp-Ch]
  int v8; // [esp+18h] [ebp-8h]
  int v9; // [esp+1Ch] [ebp-4h]

  sub_1000DD30(&v6, a2);
  v3 = v9;
  v5 = 0;
  sub_10008910(&v5, v6, v7, v8, (_DWORD *)v9);
  sub_1000DC70(a1, (int)&v6, v6, v7, v8, v3);
  return v5;
}
