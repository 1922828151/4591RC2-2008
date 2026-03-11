/*
 * func-name: ?setTransform@WaterDecal@@QAEXABVMatrix@@@Z_0
 * func-address: 0x100bd1e0
 * callers: 0x10001929
 * callees: 0x102c23d0
 */

void __thiscall WaterDecal::setTransform(WaterDecal *this, const struct Matrix *a2)
{
  _BYTE v2[64]; // [esp+8h] [ebp-40h] BYREF

  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 13);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 14);
  qmemcpy((char *)this + 44, (const void *)sub_102C23D0(v2), 0x40u);
}
