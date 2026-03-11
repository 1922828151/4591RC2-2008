/*
 * func-name: ?_Ufill@?$vector@UAttributeRange@@V?$allocator@UAttributeRange@@@std@@@std@@IAEPAUAttributeRange@@PAU3@IABU3@@Z
 * func-address: 0x10020410
 * callers: 0x10022540, 0x100a1e60, 0x100a2120, 0x100d14d0, 0x100f6900
 * callees: 0x1001dde0
 */

_DWORD *__stdcall std::vector<AttributeRange>::_Ufill(_DWORD *a1, int a2, _DWORD *a3)
{
  sub_1001DDE0(a1, a2, a3);
  return &a1[5 * a2];
}
