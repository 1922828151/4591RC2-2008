/*
 * func-name: ?Instance@NxPhysicsContactReport@@SAPAV1@XZ
 * func-address: 0x10147860
 * callers: 0x10144910
 * callees: 0x101a26a0
 */

struct NxPhysicsContactReport *__cdecl NxPhysicsContactReport::Instance()
{
  if ( (dword_11241CD8 & 1) == 0 )
  {
    dword_11241CD8 |= 1u;
    dword_11241CD4 = (int)&NxPhysicsContactReport::`vftable';
    atexit(sub_101B9660);
  }
  return (struct NxPhysicsContactReport *)&dword_11241CD4;
}
