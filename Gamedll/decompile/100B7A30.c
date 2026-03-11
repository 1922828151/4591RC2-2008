/*
 * func-name: ??1ParticleTrail@@UAE@XZ_0
 * func-address: 0x100b7a30
 * callers: 0x1001981c
 * callees: 0x10005b5f, 0x102c9d50
 */

void __thiscall ParticleTrail::~ParticleTrail(void **this)
{
  bool v2; // zf
  _DWORD *v3; // eax
  _DWORD *v4; // edi

  *this = &ParticleTrail::`vftable';
  ParticleTrail::Clear((ParticleTrail *)this);
  v2 = *((_BYTE *)this + 252) == 0;
  this[59] = &ObjectNodeList::`vftable';
  if ( !v2 )
  {
    v3 = this[60];
    if ( v3 )
    {
      do
      {
        v4 = (_DWORD *)v3[1];
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  std::vector<Material *>::~vector<Material *>(this + 51);
  if ( this[47] )
    operator delete(this[47]);
  this[47] = 0;
  this[48] = 0;
  this[49] = 0;
  FXSystem::~FXSystem((FXSystem *)this);
}
