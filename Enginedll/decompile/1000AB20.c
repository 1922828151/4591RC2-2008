/*
 * func-name: ?GetWorldBBox@FXSystem@@UAE?AVBBox@@XZ
 * func-address: 0x1000ab20
 * callers: none
 * callees: 0x10001370
 */

float *__stdcall FXSystem::GetWorldBBox(float *a1)
{
  float v2[3]; // [esp+8h] [ebp-18h] BYREF
  float v3[3]; // [esp+14h] [ebp-Ch] BYREF

  v2[0] = 1.0;
  v2[1] = 1.0;
  v2[2] = 1.0;
  v3[0] = -1.0;
  v3[1] = -1.0;
  v3[2] = -1.0;
  sub_10001370(a1, v3, v2);
  return a1;
}
