/*
 * func-name: ??1Effect_Light@@UAE@XZ_0
 * func-address: 0x100da8c0
 * callers: 0x10009ad9
 * callees: 0x1000daf3
 */

void __thiscall Effect_Light::~Effect_Light(Effect_Light *this)
{
  int v2; // ecx

  *(_DWORD *)this = &Effect_Light::`vftable';
  v2 = *((_DWORD *)this + 284);
  if ( v2 )
  {
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v2 + 80))(v2, 1);
    *((_DWORD *)this + 284) = 0;
  }
  Effect_Base::~Effect_Base(this);
}
