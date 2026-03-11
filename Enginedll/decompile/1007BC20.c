/*
 * func-name: ?GetNumTextures@CPRTMesh@@UAEHXZ
 * func-address: 0x1007bc20
 * callers: none
 * callees: none
 */

int __thiscall CPRTMesh::GetNumTextures(CPRTMesh *this)
{
  return (*(int (__thiscall **)(CPRTMesh *))(*(_DWORD *)this + 12))(this) / 4;
}
