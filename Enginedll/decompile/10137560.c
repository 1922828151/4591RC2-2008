/*
 * func-name: ?GetWorldBBox@World@@QAE_NAAVBBox@@@Z
 * func-address: 0x10137560
 * callers: none
 * callees: 0x10102130
 */

char __thiscall World::GetWorldBBox(World *this, struct BBox *a2)
{
  _DWORD *v2; // ecx

  v2 = (_DWORD *)*((_DWORD *)this + 189);
  if ( !v2 )
    return 0;
  sub_10102130(v2, a2);
  return 1;
}
