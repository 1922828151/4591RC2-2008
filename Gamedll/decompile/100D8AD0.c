/*
 * func-name: sub_100D8AD0
 * func-address: 0x100d8ad0
 * callers: 0x1000236a
 * callees: 0x10014155
 */

_DWORD *__thiscall sub_100D8AD0(_DWORD *this, int a2, int a3, int a4, int a5)
{
  Texture *v6; // edi
  _DWORD v8[7]; // [esp-10h] [ebp-54h] BYREF
  int v9; // [esp+Ch] [ebp-38h]
  float v10; // [esp+10h] [ebp-34h]
  float v11; // [esp+14h] [ebp-30h]
  float v12; // [esp+18h] [ebp-2Ch]
  float v13; // [esp+1Ch] [ebp-28h]
  float v14; // [esp+20h] [ebp-24h]
  int v15; // [esp+24h] [ebp-20h]
  _DWORD *v16; // [esp+34h] [ebp-10h]
  int v17; // [esp+40h] [ebp-4h]

  v16 = this;
  v6 = (Texture *)(this + 89);
  ParticleSystem::ParticleSystem(a2, a3, -1, a4, a5, (int)(this + 89), 6);
  v17 = 0;
  *this = &ChainLightLinkParticles::`vftable';
  Texture::Texture(v6);
  v15 = 0;
  v14 = 0.0;
  LOBYTE(v17) = 1;
  v13 = 1.0;
  v12 = 1.0;
  v11 = 0.0;
  v10 = 0.0;
  v9 = 0;
  std::string::string(v8, "chainlink.dds");
  Texture::Load(
    v6,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    LODWORD(v10),
    LODWORD(v11),
    LODWORD(v12),
    LODWORD(v13),
    LODWORD(v14),
    v15);
  return this;
}
