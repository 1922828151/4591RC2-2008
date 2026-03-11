/*
 * func-name: ??0AnimationModal@@QAE@ABV0@@Z_0
 * func-address: 0x100a75c0
 * callers: 0x10017f7b
 * callees: 0x1000727a, 0x1000e53e, 0x1001078f
 */

AnimationModal *__thiscall AnimationModal::AnimationModal(AnimationModal *this, const struct AnimationModal *a2)
{
  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &AnimationModal::`vftable';
  sub_1001078F((char *)a2 + 1136);
  *((_DWORD *)this + 308) = *((_DWORD *)a2 + 308);
  std::string::string((char *)this + 1236, (char *)a2 + 1236);
  *((float *)this + 316) = *((float *)a2 + 316);
  *((_DWORD *)this + 317) = *((_DWORD *)a2 + 317);
  *((_DWORD *)this + 318) = *((_DWORD *)a2 + 318);
  *((_DWORD *)this + 319) = *((_DWORD *)a2 + 319);
  *((_DWORD *)this + 320) = *((_DWORD *)a2 + 320);
  std::string::string((char *)this + 1284, (char *)a2 + 1284);
  std::string::string((char *)this + 1312, (char *)a2 + 1312);
  std::string::string((char *)this + 1340, (char *)a2 + 1340);
  std::string::string((char *)this + 1368, (char *)a2 + 1368);
  sub_1000E53E((int)a2 + 1396);
  return this;
}
