/*
 * func-name: ??4Dgram_Accept_Bluider_Process@IONetwork@Outpop@@QAEAAV012@ABV012@@Z
 * func-address: 0x100167d0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall Outpop::IONetwork::Dgram_Accept_Bluider_Process::operator=(_DWORD *this, _DWORD *a2)
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
  this[11] = a2[11];
  this[12] = a2[12];
  this[14] = a2[14];
  v5 = (Outpop::Utility::Ref_Object *)this[15];
  if ( v5 )
    Outpop::Utility::Ref_Object::release(v5);
  v6 = (Outpop::Utility::Ref_Object *)a2[15];
  this[15] = v6;
  if ( v6 )
    Outpop::Utility::Ref_Object::addref(v6);
  v7 = (Outpop::Utility::Ref_Object *)this[16];
  if ( v7 )
    Outpop::Utility::Ref_Object::release(v7);
  v8 = (Outpop::Utility::Ref_Object *)a2[16];
  this[16] = v8;
  if ( v8 )
    Outpop::Utility::Ref_Object::addref(v8);
  return this;
}
