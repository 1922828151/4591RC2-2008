/*
 * func-name: ??4CFormatedStatic@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d4570
 * callers: none
 * callees: 0x100718a0, 0x100d3f80
 */

_DWORD *__thiscall CFormatedStatic::operator=(_DWORD *this, _DWORD *a2)
{
  CREStatic::operator=((int)this, (int)a2);
  sub_100D3F80((int)(this + 174), (int)(a2 + 174));
  this[178] = a2[178];
  this[179] = a2[179];
  this[180] = a2[180];
  this[181] = a2[181];
  this[182] = a2[182];
  this[183] = a2[183];
  return this;
}
