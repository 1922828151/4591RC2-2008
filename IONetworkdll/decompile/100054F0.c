/*
 * func-name: ??4Channel@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100054f0
 * callers: 0x1000e370, 0x10022d00, 0x10042370
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Channel::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // eax
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // ecx

  if ( this != a2 )
    this[1] = 0;
  qmemcpy(this + 2, a2 + 2, 0x2Cu);
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(a2[13] + 16))(a2 + 13);
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[13] + 16))(this + 13);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(a2[20] + 16))(a2 + 20);
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[20] + 16))(this + 20);
  *v6 = *v5;
  v6[1] = v5[1];
  v6[2] = v5[2];
  v6[3] = v5[3];
  this[27] = a2[27];
  this[28] = a2[28];
  this[29] = a2[29];
  this[30] = a2[30];
  this[31] = a2[31];
  this[32] = a2[32];
  this[33] = a2[33];
  this[34] = a2[34];
  this[35] = a2[35];
  this[36] = a2[36];
  this[37] = a2[37];
  this[38] = a2[38];
  v7 = (Outpop::Utility::Ref_Object *)this[39];
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v8 = (Outpop::Utility::Ref_Object *)a2[39];
  this[39] = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  this[40] = a2[40];
  this[41] = a2[41];
  this[42] = a2[42];
  this[43] = a2[43];
  this[44] = a2[44];
  return this;
}
