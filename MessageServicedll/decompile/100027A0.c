/*
 * func-name: sub_100027A0
 * func-address: 0x100027a0
 * callers: 0x100012e0
 * callees: 0x10002960, 0x10002cb0, 0x10009030, 0x10029d92
 */

int __thiscall sub_100027A0(_DWORD *this, int a2)
{
  int *v3; // eax
  int v4; // ebx
  _DWORD v6[4]; // [esp+0h] [ebp-38h] BYREF
  _DWORD *v7; // [esp+18h] [ebp-20h]
  _DWORD *v8; // [esp+20h] [ebp-18h]
  _DWORD *v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+34h] [ebp-4h]

  v9 = v6;
  *(_DWORD *)(a2 + 4) = sub_10002960(v6[0], v6[1]);
  *(_DWORD *)(a2 + 8) = 0;
  v10 = 0;
  v3 = (int *)this[1];
  v7 = this;
  v4 = *v3;
  v8 = this;
  sub_10002CB0(a2, a2, **(_DWORD **)(a2 + 4), v7, v4, v7, v3);
  return a2;
}
