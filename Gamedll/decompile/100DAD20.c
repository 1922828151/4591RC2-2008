/*
 * func-name: ?Tick@Effect_Light@@UAEXXZ_0
 * func-address: 0x100dad20
 * callers: 0x1000668b
 * callees: 0x100199a2, 0x102c9d98
 */

void __thiscall Effect_Light::Tick(struct World **this)
{
  Light *v2; // esi
  struct World *v3; // eax
  float v4; // [esp+14h] [ebp-10h]

  if ( !this[284] )
  {
    v2 = (Light *)operator new(0x5B0u);
    if ( v2 )
    {
      Light::Light(v2, this[178]);
      *(_DWORD *)v2 = &Light::`vftable';
    }
    else
    {
      v2 = 0;
    }
    this[284] = v2;
    std::string::operator=((char *)v2 + 444, "Light");
    *((_BYTE *)this[284] + 440) = 0;
  }
  v3 = this[284];
  *((_DWORD *)v3 + 214) = this[214];
  v3 = (struct World *)((char *)v3 + 856);
  *((_DWORD *)v3 + 1) = this[215];
  *((_DWORD *)v3 + 2) = this[216];
  qmemcpy((char *)this[284] + 868, this + 217, 0x40u);
  *((_BYTE *)this[284] + 816) = *((_BYTE *)this + 816);
  if ( *((_BYTE *)this + 1064) )
  {
    v4 = *((float *)this + 278) * *((float *)this + 265);
    Light::SetIntensity(this[284], v4);
  }
  Effect_Base::Tick((Effect_Base *)this);
}
