/*
 * func-name: ?ComparePriority@SoundMgr@@SAHABUPrePlaySound@1@0@Z_0
 * func-address: 0x100e94d0
 * callers: 0x100053d5
 * callees: none
 */

BOOL __cdecl SoundMgr::ComparePriority(
        const struct SoundMgr::PrePlaySound *a1,
        const struct SoundMgr::PrePlaySound *a2)
{
  return *((float *)a2 + 2) < (double)*((float *)a1 + 2);
}
