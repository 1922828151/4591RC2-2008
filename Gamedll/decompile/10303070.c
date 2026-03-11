/*
 * func-name: sub_10303070
 * func-address: 0x10303070
 * callers: none
 * callees: 0x102c9f53
 */

int sub_10303070()
{
  _DWORD v1[7]; // [esp-24h] [ebp-28h] BYREF
  int v2; // [esp-8h] [ebp-Ch]
  int v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp+0h] [ebp-4h]

  v3 = 1;
  v2 = 1;
  v4 = v1;
  std::string::string(v1, "Effect_LightBeam");
  Factory::Factory(&dword_103B5234, v1[0], v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v2, v3);
  dword_103B5234 = (int)&TypedFactory<Effect_LightBeam>::`vftable';
  return atexit(sub_103056D0);
}
