/*
 * func-name: ??4P2PUdpBuilder@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10042880
 * callers: none
 * callees: 0x10004960, 0x10049d30
 */

_DWORD *__thiscall Outpop::IONetwork::P2PUdpBuilder::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // eax

  if ( this != a2 )
    this[1] = 0;
  this[2] = a2[2];
  Outpop::IONetwork::P2P_Config::operator=((int)(this + 3), (int)(a2 + 3));
  this[27] = a2[27];
  this[28] = a2[28];
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(a2[29] + 16))(a2 + 29);
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[29] + 16))(this + 29);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  this[36] = a2[36];
  this[37] = a2[37];
  this[38] = a2[38];
  this[39] = a2[39];
  this[40] = a2[40];
  this[41] = a2[41];
  this[42] = a2[42];
  this[43] = a2[43];
  this[44] = a2[44];
  this[45] = a2[45];
  this[46] = a2[46];
  this[47] = a2[47];
  this[48] = a2[48];
  this[49] = a2[49];
  if ( this + 51 != a2 + 51 )
    sub_10049D30(this + 51, a2 + 51);
  this[61] = a2[61];
  this[62] = a2[62];
  return this;
}
