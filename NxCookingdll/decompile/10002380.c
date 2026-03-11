/*
 * func-name: sub_10002380
 * func-address: 0x10002380
 * callers: 0x10002a80, 0x10002b70, 0x10002c60, 0x10002d40, 0x10002e20, 0x10002f00, 0x10002fe0, 0x10003120, 0x10003250, 0x10003340
 * callees: 0x10001830
 */

int __thiscall sub_10002380(_DWORD *this, _DWORD *a2)
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
  sub_10001830(v2, (int)&a2, 4u);
  LOBYTE(a2) = *((_BYTE *)this + 16);
  return sub_10001830(v2, (int)&a2, 1u);
}
