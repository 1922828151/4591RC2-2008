/*
 * func-name: ?ReleaseTriangleMesh@NxPhysics@@QAEXPAVNxTriangleMesh@@@Z
 * func-address: 0x10140fc0
 * callers: 0x100eefb0
 * callees: none
 */

void __thiscall NxPhysics::ReleaseTriangleMesh(NxPhysics *this, struct NxTriangleMesh *a2)
{
  if ( a2 )
    (*(void (__thiscall **)(_DWORD, struct NxTriangleMesh *))(**((_DWORD **)this + 2) + 36))(*((_DWORD *)this + 2), a2);
}
