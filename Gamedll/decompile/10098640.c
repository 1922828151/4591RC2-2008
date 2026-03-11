/*
 * func-name: ??1Effect_ShadedParticles@@UAE@XZ_0
 * func-address: 0x10098640
 * callers: 0x10017a71
 * callees: 0x102c9d50
 */

void __thiscall Effect_ShadedParticles::~Effect_ShadedParticles(Effect_ShadedParticles *this)
{
  Material *v2; // edi
  void (__thiscall ***v3)(_DWORD, int); // ecx

  *(_DWORD *)this = &Effect_ShadedParticles::`vftable';
  v2 = (Material *)*((_DWORD *)this + 303);
  if ( v2 )
  {
    Material::~Material(v2);
    operator delete(v2);
    *((_DWORD *)this + 303) = 0;
  }
  v3 = (void (__thiscall ***)(_DWORD, int))*((_DWORD *)this + 306);
  if ( v3 )
  {
    (**v3)(v3, 1);
    *((_DWORD *)this + 306) = 0;
  }
  Precacher::PurgeModel((struct Model **)this + 179);
  std::string::~string((char *)this + 1160);
  std::string::~string((char *)this + 1132);
  Actor::~Actor(this);
}
