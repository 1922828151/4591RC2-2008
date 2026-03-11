/*
 * func-name: ?Clone@AnimationSet@@QBE_NAAV1@@Z
 * func-address: 0x100f1fe0
 * callers: none
 * callees: none
 */

char __thiscall AnimationSet::Clone(AnimationSet *this, struct AnimationSet *a2)
{
  int v3; // esi

  std::string::operator=((char *)a2 + 4, (char *)this + 4);
  *((_BYTE *)a2 + 32) = *((_BYTE *)this + 32);
  *((float *)a2 + 9) = *((float *)this + 9);
  v3 = *((_DWORD *)this + 10);
  *((_DWORD *)a2 + 10) = v3;
  if ( v3 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  return 1;
}
