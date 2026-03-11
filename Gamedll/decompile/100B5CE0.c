/*
 * func-name: ?AddMaterial@ParticleTrail@@QAEXPAVMaterial@@@Z_0
 * func-address: 0x100b5ce0
 * callers: 0x1000ffb0
 * callees: none
 */

void __thiscall ParticleTrail::AddMaterial(ParticleTrail *this, struct Material *a2)
{
  char *v3; // esi

  v3 = (char *)this + 204;
  std::vector<Material *>::push_back((char *)this + 204, &a2);
  if ( std::vector<Material *>::size(v3) == 1 )
    *((_DWORD *)this + 50) = *(_DWORD *)std::vector<Material *>::operator[](v3, 0);
}
