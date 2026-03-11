/*
 * func-name: ?SetTransform@AnimationModal@@MAEXABVMatrix@@@Z_0
 * func-address: 0x100dace0
 * callers: 0x1000fe16
 * callees: 0x10015e01
 */

void __thiscall AnimationModal::SetTransform(AnimationModal *this, const struct Matrix *a2)
{
  Effect_Base::SetTransform(this, a2);
  if ( *((_DWORD *)this + 179) )
    (*(void (__thiscall **)(_DWORD, char *, char *))(**((_DWORD **)this + 179) + 28))(
      *((_DWORD *)this + 179),
      (char *)this + 868,
      (char *)this + 856);
}
