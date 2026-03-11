/*
 * func-name: sub_103036F0
 * func-address: 0x103036f0
 * callers: none
 * callees: 0x102c9f53
 */

int sub_103036F0()
{
  _DWORD v1[7]; // [esp-24h] [ebp-28h] BYREF
  int v2; // [esp-8h] [ebp-Ch]
  int v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp+0h] [ebp-4h]

  v3 = 1;
  v2 = 1;
  v4 = v1;
  std::string::string(v1, "SamplePlayer");
  Factory::Factory(&dword_103B5C90, v1[0], v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v2, v3);
  dword_103B5C90 = (int)&TypedFactory<SamplePlayer>::`vftable';
  return atexit(sub_103058A0);
}
