/*
 * func-name: ??0RandomTexturePhysicsParticles@@QAE@_NMMHPAVWorld@@KMHHAAVVector@@22MMMMMMMM0AAV?$vector@PAVTexture@@V?$allocator@PAVTexture@@@std@@@std@@W4BlendMode@@@Z_0
 * func-address: 0x100bb360
 * callers: 0x100177bf
 * callees: 0x1000b52d, 0x1000eb4c, 0x1001302a
 */

_DWORD *__thiscall RandomTexturePhysicsParticles::RandomTexturePhysicsParticles(
        _DWORD *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24)
{
  int v25; // eax
  int v26; // esi

  PhysicsParticles::PhysicsParticles(
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    0,
    a24);
  *this = &RandomTexturePhysicsParticles::`vftable';
  this[97] = 0;
  this[98] = 0;
  this[99] = 0;
  this[101] = 0;
  this[102] = 0;
  this[103] = 0;
  sub_1000B52D(a23);
  v25 = this[97];
  if ( v25 )
    v26 = (this[98] - v25) >> 2;
  else
    v26 = 0;
  sub_1001302A(this + 100, v26, 0);
  return this;
}
