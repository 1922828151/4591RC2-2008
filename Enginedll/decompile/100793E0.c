/*
 * func-name: sub_100793E0
 * func-address: 0x100793e0
 * callers: none
 * callees: 0x100792c0
 */

bool __cdecl sub_100793E0(
        float a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12)
{
  return sub_100792C0(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12)
      && sub_100792C0(a1, a2, a3, a7, a8, a9, a4, a5, a6, a10, a11, a12)
      && sub_100792C0(a1, a2, a3, a10, a11, a12, a4, a5, a6, a7, a8, a9);
}
