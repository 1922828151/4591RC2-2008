/*
 * func-name: ??4Bluid_Pakcet@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10008f90
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Bluid_Pakcet::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebp
  _DWORD *v4; // edi
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax

  *this = *a2;
  v3 = this + 1;
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(a2[1] + 16))(a2 + 1);
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v3 + 16))(this + 1);
  *v5 = *v4;
  v5[1] = v4[1];
  v5[2] = v4[2];
  v5[3] = v4[3];
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(a2[8] + 16))(a2 + 8);
  v7 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[8] + 16))(this + 8);
  *v7 = *v6;
  v7[1] = v6[1];
  v7[2] = v6[2];
  v7[3] = v6[3];
  this[15] = a2[15];
  return this;
}
