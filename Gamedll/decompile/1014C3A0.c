/*
 * func-name: sub_1014C3A0
 * func-address: 0x1014c3a0
 * callers: 0x1001a276
 * callees: 0x10005d4e, 0x1001535c, 0x10016c7f, 0x1001aaf0, 0x102c9d86
 */

void __thiscall sub_1014C3A0(void *this, int a2, int a3, int a4, int a5)
{
  int v5; // ebx
  int v6; // esi
  _DWORD v7[12]; // [esp+0h] [ebp-30h] BYREF

  v7[8] = v7;
  v7[7] = this;
  v5 = a4;
  v7[5] = a4;
  v7[11] = 0;
  while ( v5 )
  {
    v6 = sub_1001AAF0(a3, *(_DWORD *)(a3 + 4), a5);
    sub_10016C7F(1);
    *(_DWORD *)(a3 + 4) = v6;
    --v5;
    **(_DWORD **)(v6 + 4) = v6;
  }
}
