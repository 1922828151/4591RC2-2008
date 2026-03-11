/*
 * func-name: ?CreateMaterial@NxPhysics@@QAEHPAVNxMaterialDesc@@@Z
 * func-address: 0x10145d50
 * callers: none
 * callees: 0x10144030, 0x10145800
 */

int __thiscall NxPhysics::CreateMaterial(NxPhysics *this, struct NxMaterialDesc *a2)
{
  int v3; // eax

  if ( !*((_DWORD *)this + 2) )
    NxPhysics::Initialize(this);
  NxPhysics::FlushScene(this);
  v3 = (*(int (__thiscall **)(_DWORD, struct NxMaterialDesc *))(**((_DWORD **)this + 3) + 144))(
         *((_DWORD *)this + 3),
         a2);
  return (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
}
