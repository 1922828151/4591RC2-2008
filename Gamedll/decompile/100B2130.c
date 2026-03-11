/*
 * func-name: ?FlushParticles@ParticleSystem@@UAEXXZ_0
 * func-address: 0x100b2130
 * callers: 0x1000dd0a
 * callees: 0x10014966
 */

void __thiscall ParticleSystem::FlushParticles(ParticleSystem *this)
{
  void (__thiscall *v2)(ParticleSystem *, int); // eax
  int v3; // [esp-4h] [ebp-8h]

  sub_10014966((char *)this + 188, 0);
  v3 = *((_DWORD *)this + 54);
  v2 = *(void (__thiscall **)(ParticleSystem *, int))(*(_DWORD *)this + 36);
  *((_DWORD *)this + 54) = 0;
  v2(this, v3);
}
