/*
 * func-name: ??1AnimationSet@@UAE@XZ
 * func-address: 0x100f20a0
 * callers: 0x100f5990
 * callees: none
 */

void __thiscall AnimationSet::~AnimationSet(AnimationSet *this)
{
  int v2; // eax

  *(_DWORD *)this = &AnimationSet::`vftable';
  v2 = *((_DWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    *((_DWORD *)this + 10) = 0;
  }
  std::string::~string((char *)this + 4);
}
