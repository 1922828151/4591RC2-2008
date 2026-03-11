/*
 * func-name: sub_103030C0
 * func-address: 0x103030c0
 * callers: none
 * callees: 0x102c9f53
 */

int sub_103030C0()
{
  _DWORD v1[7]; // [esp-24h] [ebp-28h] BYREF
  int v2; // [esp-8h] [ebp-Ch]
  int v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp+0h] [ebp-4h]

  v3 = 1;
  v2 = 1;
  v4 = v1;
  std::string::string(v1, "Effect_LightDizzy");
  Factory::Factory(&dword_103B5260, v1[0], v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v2, v3);
  dword_103B5260 = (int)&TypedFactory<Effect_LightDizzy>::`vftable';
  return atexit(sub_103056E0);
}
