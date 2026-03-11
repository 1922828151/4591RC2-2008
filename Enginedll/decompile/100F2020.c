/*
 * func-name: ??0AnimationSet@@QAE@ABV0@@Z
 * func-address: 0x100f2020
 * callers: none
 * callees: none
 */

AnimationSet *__thiscall AnimationSet::AnimationSet(AnimationSet *this, const struct AnimationSet *a2)
{
  char *v3; // ebx
  int v4; // edi

  v3 = (char *)this + 4;
  *(_DWORD *)this = &AnimationSet::`vftable';
  std::string::string((char *)this + 4);
  std::string::operator=(v3, (char *)a2 + 4);
  *((_BYTE *)this + 32) = *((_BYTE *)a2 + 32);
  *((float *)this + 9) = *((float *)a2 + 9);
  v4 = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 10) = v4;
  if ( v4 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  return this;
}
