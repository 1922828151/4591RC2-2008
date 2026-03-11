/*
 * func-name: ?IsSettingOpacity@Prefab@@QAE_NXZ
 * func-address: 0x10018550
 * callers: none
 * callees: none
 */

BOOL __thiscall Prefab::IsSettingOpacity(Prefab *this)
{
  return *((float *)this + 207) < 0.9999998807907104;
}
