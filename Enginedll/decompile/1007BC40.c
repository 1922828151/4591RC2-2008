/*
 * func-name: ?AddRef@CPRTMesh@@UAEXXZ
 * func-address: 0x1007bc40
 * callers: none
 * callees: none
 */

void __thiscall CPRTMesh::AddRef(CPRTMesh *this)
{
  ++*((_DWORD *)this + 1);
}
