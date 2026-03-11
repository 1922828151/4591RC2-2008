/*
 * func-name: ?UpdateStaticPRT@World@@QAEXPAVMesh@@@Z
 * func-address: 0x10116fb0
 * callers: 0x1005cb50
 * callees: none
 */

void __thiscall World::UpdateStaticPRT(World *this, struct Mesh *a2)
{
  int v3; // eax

  v3 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)a2 + 16))(a2);
  if ( v3 )
    (*(void (__thiscall **)(int, char *, char *, char *, int))(*(_DWORD *)v3 + 8))(
      v3,
      (char *)this + 88,
      (char *)this + 232,
      (char *)this + 376,
      *((_DWORD *)this + 130) * *((_DWORD *)this + 130));
}
