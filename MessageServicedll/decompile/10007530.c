/*
 * func-name: sub_10007530
 * func-address: 0x10007530
 * callers: 0x10004910
 * callees: 0x10002960, 0x10009030, 0x1000a540, 0x10029d92
 */

int __thiscall sub_10007530(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // ebx
  int v6; // [esp+0h] [ebp-38h] BYREF
  _DWORD *v7; // [esp+18h] [ebp-20h]
  _DWORD *v8; // [esp+20h] [ebp-18h]
  int *v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+34h] [ebp-4h]

  v9 = &v6;
  *(_DWORD *)(a2 + 4) = sub_10002960();
  *(_DWORD *)(a2 + 8) = 0;
  v10 = 0;
  v3 = (int *)this[1];
  v7 = this;
  v4 = *v3;
  v8 = this;
  sub_1000A540(a2, a2, **(_DWORD **)(a2 + 4), v7, v4, v7, v3);
  return a2;
}
