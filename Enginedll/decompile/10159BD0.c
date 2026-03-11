/*
 * func-name: ?Instance@MaterialIntersect@@SAPAV1@XZ
 * func-address: 0x10159bd0
 * callers: none
 * callees: 0x10159ac0, 0x101a26a0
 */

struct MaterialIntersect *__cdecl MaterialIntersect::Instance()
{
  if ( (dword_112429EC & 1) == 0 )
  {
    dword_112429EC |= 1u;
    MaterialIntersect::MaterialIntersect((MaterialIntersect *)&unk_112429B0);
    atexit(sub_101B9690);
  }
  return (struct MaterialIntersect *)&unk_112429B0;
}
