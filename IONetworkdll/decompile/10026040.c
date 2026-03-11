/*
 * func-name: ??4Dgram_Acceptor@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10026040
 * callers: none
 * callees: 0x10004bc0, 0x1002bd30
 */

_DWORD *__thiscall Outpop::IONetwork::Dgram_Acceptor::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // eax

  Outpop::IONetwork::Acceptor::operator=(this, a2);
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(a2[39] + 16))(a2 + 39);
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[39] + 16))(this + 39);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  this[46] = a2[46];
  this[47] = a2[47];
  this[48] = a2[48];
  this[49] = a2[49];
  this[50] = a2[50];
  this[51] = a2[51];
  this[52] = a2[52];
  this[53] = a2[53];
  this[54] = a2[54];
  this[55] = a2[55];
  this[56] = a2[56];
  this[57] = a2[57];
  this[58] = a2[58];
  this[59] = a2[59];
  this[60] = a2[60];
  if ( this + 62 != a2 + 62 )
    sub_1002BD30(this + 62, a2 + 62);
  if ( this + 72 != a2 + 72 )
    sub_1002BD30(this + 72, a2 + 72);
  if ( this + 82 != a2 + 82 )
    sub_1002BD30(this + 82, a2 + 82);
  return this;
}
