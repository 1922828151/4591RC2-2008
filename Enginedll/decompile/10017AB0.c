/*
 * func-name: ?GetNumBones@Mesh@@UAEHXZ
 * func-address: 0x10017ab0
 * callers: none
 * callees: none
 */

int __thiscall Mesh::GetNumBones(Mesh *this)
{
  if ( *((_DWORD *)this + 3) )
    return (*(int (__stdcall **)(_DWORD))(**((_DWORD **)this + 3) + 36))(*((_DWORD *)this + 3));
  else
    return 0;
}
