/*
 * func-name: sub_103031E0
 * func-address: 0x103031e0
 * callers: none
 * callees: 0x102c9f53
 */

int sub_103031E0()
{
  _DWORD v1[7]; // [esp-24h] [ebp-28h] BYREF
  int v2; // [esp-8h] [ebp-Ch]
  int v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp+0h] [ebp-4h]

  v3 = 1;
  v2 = 1;
  v4 = v1;
  std::string::string(v1, "Effect_ParticleSystem");
  Factory::Factory(&dword_103B533C, v1[0], v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v2, v3);
  dword_103B533C = (int)&TypedFactory<Effect_ParticleSystem>::`vftable';
  return atexit(sub_10305720);
}
