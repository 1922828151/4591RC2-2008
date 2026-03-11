/*
 * func-name: ??4Dgram_Connect_Bluider_Process@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x10016ae0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Dgram_Connect_Bluider_Process::operator=(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // eax
  Outpop::Utility::Ref_Object *v5; // ecx
  Outpop::Utility::Ref_Object *v6; // ecx
  Outpop::Utility::Ref_Object *v7; // ecx
  Outpop::Utility::Ref_Object *v8; // edi

  if ( this != a2 )
    this[1] = 0;
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(a2[2] + 16))(a2 + 2);
  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(this[2] + 16))(this + 2);
  *v4 = *v3;
  v4[1] = v3[1];
  v4[2] = v3[2];
  v4[3] = v3[3];
  this[9] = a2[9];
  this[10] = a2[10];
  this[12] = a2[12];
  v5 = (Outpop::Utility::Ref_Object *)this[13];
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
  v6 = (Outpop::Utility::Ref_Object *)a2[13];
  this[13] = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref(v6);
  this[14] = a2[14];
  this[15] = a2[15];
  this[16] = a2[16];
  v7 = (Outpop::Utility::Ref_Object *)this[17];
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v8 = (Outpop::Utility::Ref_Object *)a2[17];
  this[17] = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  return this;
}
