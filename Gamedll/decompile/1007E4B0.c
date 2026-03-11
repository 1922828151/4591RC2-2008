/*
 * func-name: ??1Effect_Base@@UAE@XZ_0
 * func-address: 0x1007e4b0
 * callers: 0x1000daf3
 * callees: none
 */

void __thiscall Effect_Base::~Effect_Base(Effect_Base *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 263);
  *(_DWORD *)this = &Effect_Base::`vftable';
  if ( v1 )
    *(float *)(v1 + 108) = 0.0;
  Actor::~Actor(this);
}
