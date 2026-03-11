/*
 * func-name: ??4Seat@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101281e0
 * callers: 0x1001ab09
 * callees: 0x10004903, 0x1001987b
 */

_DWORD *__thiscall GameClient::Seat::operator=(_DWORD *this, _DWORD *a2)
{
  this[1] = a2[1];
  this[2] = a2[2];
  this[3] = a2[3];
  this[4] = a2[4];
  this[5] = a2[5];
  this[6] = a2[6];
  sub_10004903((int)(a2 + 7));
  std::vector<ModelFrame *>::operator=(this + 11, a2 + 11);
  sub_1001987B((int)(a2 + 15));
  this[19] = a2[19];
  this[20] = a2[20];
  this[21] = a2[21];
  this[22] = a2[22];
  this[23] = a2[23];
  this[24] = a2[24];
  this[25] = a2[25];
  this[26] = a2[26];
  this[27] = a2[27];
  qmemcpy(this + 28, a2 + 28, 0x5Cu);
  qmemcpy(this + 51, a2 + 51, 0x8Fu);
  this[87] = a2[87];
  return this;
}
