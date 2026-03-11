/*
 * func-name: ?CreateMaterial@NxPhysics@@QAEHMM@Z
 * func-address: 0x10145cd0
 * callers: none
 * callees: 0x10144030, 0x10145800
 */

int __thiscall NxPhysics::CreateMaterial(NxPhysics *this, float a2, float a3)
{
  int v4; // ecx
  int v5; // eax
  float v7[12]; // [esp+8h] [ebp-30h] BYREF

  if ( !*((_DWORD *)this + 2) )
    NxPhysics::Initialize(this);
  NxPhysics::FlushScene(this);
  v4 = *((_DWORD *)this + 3);
  v7[3] = 0.0;
  v7[4] = 0.0;
  memset(&v7[8], 0, 16);
  v7[5] = 1.0;
  v7[6] = 0.0;
  v7[7] = 0.0;
  v7[2] = a2;
  v7[1] = a3;
  v7[0] = a3;
  v5 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v4 + 144))(v4, v7);
  return (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
}
