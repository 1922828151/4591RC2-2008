/*
 * func-name: sub_10303600
 * func-address: 0x10303600
 * callers: none
 * callees: 0x102c9f53
 */

int sub_10303600()
{
  _DWORD v1[7]; // [esp-24h] [ebp-28h] BYREF
  int v2; // [esp-8h] [ebp-Ch]
  int v3; // [esp-4h] [ebp-8h]
  _DWORD *v4; // [esp+0h] [ebp-4h]

  v3 = 1;
  v2 = 1;
  v4 = v1;
  std::string::string(v1, "GameSoundSource");
  Factory::Factory(&dword_103B5C3C, v1[0], v1[1], v1[2], v1[3], v1[4], v1[5], v1[6], v2, v3);
  dword_103B5C3C = (int)&TypedFactory<GameSoundSource>::`vftable';
  return atexit(sub_10305860);
}
