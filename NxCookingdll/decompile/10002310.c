/*
 * func-name: sub_10002310
 * func-address: 0x10002310
 * callers: 0x100027c0, 0x10002820
 * callees: 0x10001830
 */

int __thiscall sub_10002310(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // edi
  int v5; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  LOBYTE(v5) = *(_BYTE *)this;
  sub_10001830(a2, (int)&v5, 1u);
  a2 = (_DWORD *)this[1];
  sub_10001830(v2, (int)&a2, 4u);
  a2 = (_DWORD *)this[2];
  sub_10001830(v2, (int)&a2, 4u);
  a2 = (_DWORD *)this[3];
  return sub_10001830(v2, (int)&a2, 4u);
}
