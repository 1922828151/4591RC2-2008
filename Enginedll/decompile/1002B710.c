/*
 * func-name: ??0?$vector@VBBox@@V?$allocator@VBBox@@@std@@@std@@QAE@I@Z
 * func-address: 0x1002b710
 * callers: none
 * callees: 0x10001440, 0x100250d0, 0x1017a0b0
 */

_DWORD *__thiscall std::vector<BBox>::vector<BBox>(_DWORD *this, unsigned int a2)
{
  float *v3; // eax
  float v5[10]; // [esp+4h] [ebp-34h] BYREF
  int v6; // [esp+34h] [ebp-4h]

  v3 = sub_10001440(v5);
  v6 = 0;
  std::vector<BBox>::_Construct_n(this, a2, v3);
  v6 = -1;
  sub_1017A0B0(v5);
  return this;
}
