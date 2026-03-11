/*
 * func-name: ??4Stream_Connector@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x1001db00
 * callers: none
 * callees: 0x100046e0
 */

_DWORD *__thiscall Outpop::IONetwork::Stream_Connector::operator=(_DWORD *this, _DWORD *a2)
{
  Outpop::Utility::Ref_Object *v3; // ecx
  Outpop::Utility::Ref_Object *v4; // ecx
  _DWORD *v5; // ebx
  _DWORD *v6; // eax

  if ( this != a2 )
    this[1] = 0;
  this[2] = a2[2];
  Outpop::IONetwork::Connector_Config::operator=((int)(this + 3), (int)(a2 + 3));
  this[27] = a2[27];
  this[28] = a2[28];
  this[29] = a2[29];
  this[30] = a2[30];
  this[31] = a2[31];
  this[32] = a2[32];
  v3 = (Outpop::Utility::Ref_Object *)this[33];
  if ( v3 )
    Outpop::Utility::Ref_Object::release(v3);
  v4 = (Outpop::Utility::Ref_Object *)a2[33];
  this[33] = v4;
  if ( v4 )
    Outpop::Utility::Ref_Object::addref(v4);
  this[34] = a2[34];
  v5 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(a2[35] + 16))(a2 + 35);
  v6 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[35] + 16))(this + 35);
  *v6 = *v5;
  v6[1] = v5[1];
  v6[2] = v5[2];
  v6[3] = v5[3];
  this[42] = a2[42];
  return this;
}
