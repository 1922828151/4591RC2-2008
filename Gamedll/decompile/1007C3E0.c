/*
 * func-name: ??1DynamicLasers@@UAE@XZ_0
 * func-address: 0x1007c3e0
 * callers: 0x10005907
 * callees: 0x102c0750, 0x102c9d50
 */

void __thiscall DynamicLasers::~DynamicLasers(DynamicLasers *this)
{
  void *v2; // eax

  *(_DWORD *)this = &DynamicLasers::`vftable';
  v2 = (void *)*((_DWORD *)this + 65);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  sub_102C0750((char *)this + 184);
  FXSystem::~FXSystem(this);
}
