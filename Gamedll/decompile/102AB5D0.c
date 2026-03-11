/*
 * func-name: sub_102AB5D0
 * func-address: 0x102ab5d0
 * callers: 0x10009368
 * callees: 0x10001f87, 0x10003639, 0x10012076
 */

int __stdcall sub_102AB5D0(int a1)
{
  int v1; // edi
  int v2; // ebx
  void *v3; // ebp
  int v5; // [esp+10h] [ebp-10h] BYREF
  void *v6; // [esp+14h] [ebp-Ch]
  int v7; // [esp+18h] [ebp-8h]
  int v8; // [esp+1Ch] [ebp-4h]

  sub_10012076((int)&v5, a1);
  v1 = v8;
  v2 = v7;
  v3 = v6;
  a1 = 0;
  sub_10001F87(v5, (int)v6, v7, v8, (int)&a1);
  sub_10003639((int)&v5, v5, v3, v2, v1);
  return a1;
}
