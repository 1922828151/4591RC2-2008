/*
 * func-name: ??4Stream_Acceptor@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10016d50
 * callers: none
 * callees: 0x10004bc0, 0x1002bd30
 */

_DWORD *__thiscall Outpop::IONetwork::Stream_Acceptor::operator=(_DWORD *this, _DWORD *a2)
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
  if ( this + 48 != a2 + 48 )
    sub_1002BD30(this + 48, a2 + 48);
  return this;
}
