/*
 * func-name: ??0ParticleTrail@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100b7950
 * callers: 0x10011da1
 * callees: 0x1000e133
 */

ParticleTrail *__thiscall ParticleTrail::ParticleTrail(ParticleTrail *this, struct World *a2)
{
  FXSystem::FXSystem(this, a2);
  *(_DWORD *)this = &ParticleTrail::`vftable';
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  std::vector<Material *>::vector<Material *>((char *)this + 204);
  *((_DWORD *)this + 59) = &ObjectNodeList::`vftable';
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_BYTE *)this + 252) = 0;
  *((float *)this + 67) = 0.0;
  *((float *)this + 68) = 0.0;
  *((float *)this + 69) = 0.0;
  *((float *)this + 70) = 0.0;
  *((float *)this + 71) = 0.0;
  *((float *)this + 72) = 0.0;
  *((float *)this + 89) = 0.0;
  *((float *)this + 90) = 0.0;
  *((float *)this + 91) = 0.0;
  ParticleTrail::InitializeMembers(this);
  return this;
}
