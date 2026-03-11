/*
 * func-name: ?Instance@NxPhysics@@SAPAV1@XZ
 * func-address: 0x10143fd0
 * callers: 0x1004d5d0, 0x1004d7b0, 0x1004e070, 0x1004e860, 0x100511a0, 0x100518e0, 0x10063980, 0x10088cd0, 0x10096550, 0x10097ea0, 0x100eefb0, 0x10116db0, 0x101396e0, 0x1013fac0, 0x1013fff0, 0x101404f0, 0x101477b0, 0x101478f0
 * callees: 0x10053bd0, 0x101a26a0
 */

struct NxPhysics *__cdecl NxPhysics::Instance()
{
  if ( (dword_11241CCC & 1) == 0 )
  {
    dword_11241CCC |= 1u;
    NxPhysics::NxPhysics((NxPhysics *)&unk_11241C68);
    atexit(sub_101B9650);
  }
  return (struct NxPhysics *)&unk_11241C68;
}
