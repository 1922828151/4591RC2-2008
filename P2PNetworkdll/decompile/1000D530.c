/*
 * func-name: sub_1000D530
 * func-address: 0x1000d530
 * callers: 0x1000b380
 * callees: 0x10007840, 0x10009c80, 0x1000d950
 */

int __usercall sub_1000D530@<eax>(int a1@<eax>, _DWORD *a2@<esi>)
{
  int v2; // edi
  int v3; // ebp
  int v5; // [esp+Ch] [ebp-18h] BYREF
  int v6; // [esp+10h] [ebp-14h] BYREF
  void *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+18h] [ebp-Ch]
  int v9; // [esp+1Ch] [ebp-8h]

  sub_10007840(a2, &v6, a1);
  v2 = v9;
  v3 = v8;
  v5 = 0;
  sub_10009C80(&v5, v6, v7, v8, (_DWORD *)v9);
  sub_1000D950((int)a2, (int)&v6, v6, v7, v3, v2);
  return v5;
}
