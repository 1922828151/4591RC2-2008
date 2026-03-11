/*
 * func-name: sub_103039D0
 * func-address: 0x103039d0
 * callers: none
 * callees: 0x102c9f53
 */

int sub_103039D0()
{
  _DWORD v1[7]; // [esp-24h] [ebp-28h] BYREF
  int v2; // [esp-8h] [ebp-Ch]
  int v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp+0h] [ebp-4h]

  v3 = 1;
  v2 = 1;
  v4 = v1;
  std::string::string(v1, "HookEsbSheild");
  Factory::Factory(&dword_103B5F3C, v1[0], v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v2, v3);
  dword_103B5F3C = (int)&TypedFactory<HookEsbSheild>::`vftable';
  return atexit(sub_103059C0);
}
