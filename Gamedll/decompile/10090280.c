/*
 * func-name: ?StartSpawningParticles@Effect_ParticleSystem@@UAEXXZ_0
 * func-address: 0x10090280
 * callers: 0x100098a4
 * callees: 0x102c0ed0
 */

void __thiscall Effect_ParticleSystem::StartSpawningParticles(Effect_ParticleSystem *this)
{
  int *v2; // esi
  int *v3; // eax
  int v4; // edx
  void (__thiscall *v5)(int *); // eax
  _BYTE v6[12]; // [esp+8h] [ebp-Ch] BYREF

  v2 = (int *)*((_DWORD *)this + 263);
  if ( v2 )
  {
    v2[5] = *((_DWORD *)this + 214);
    v2[6] = *((_DWORD *)this + 215);
    v2[7] = *((_DWORD *)this + 216);
    v3 = (int *)sub_102C0ED0(v6);
    v2[58] = *v3;
    v2[59] = v3[1];
    v4 = *v2;
    v2[60] = v3[2];
    v5 = *(void (__thiscall **)(int *))(v4 + 48);
    *((_BYTE *)v2 + 112) = *((_BYTE *)this + 816);
    v5(v2);
  }
}
