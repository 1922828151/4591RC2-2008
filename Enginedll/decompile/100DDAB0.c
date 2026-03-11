/*
 * func-name: ?HasExclusionList@Light@@QAE_NXZ
 * func-address: 0x100ddab0
 * callers: none
 * callees: none
 */

BOOL __thiscall Light::HasExclusionList(Light *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 360);
  return v1 && (*((_DWORD *)this + 361) - v1) >> 2 && *((_BYTE *)this + 332);
}
