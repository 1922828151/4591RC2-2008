/*
 * func-name: ??1Effect_Precipitation@@UAE@XZ_0
 * func-address: 0x10094380
 * callers: 0x1000addf
 * callees: 0x1000e174, 0x1000f9d4, 0x102c9d50
 */

void __thiscall Effect_Precipitation::~Effect_Precipitation(Effect_Precipitation *this)
{
  int v2; // eax

  *(_DWORD *)this = &Effect_Precipitation::`vftable';
  Precacher::PurgeTexture((struct Texture **)this + 350);
  Precacher::PurgeSound2D((struct Sound **)this + 324);
  std::string::~string((char *)this + 1328);
  std::string::~string((char *)this + 1300);
  v2 = *((_DWORD *)this + 321);
  if ( v2 )
  {
    sub_1000F9D4(v2, *((_DWORD *)this + 322));
    operator delete(*((void **)this + 321));
  }
  *((_DWORD *)this + 321) = 0;
  *((_DWORD *)this + 322) = 0;
  *((_DWORD *)this + 323) = 0;
  Effect_ParticleSystem::~Effect_ParticleSystem(this);
}
