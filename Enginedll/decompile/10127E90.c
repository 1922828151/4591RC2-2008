/*
 * func-name: ?GetBiasedLightPos@ShadowEngine@@IAE?AVVector@@PAVActor@@@Z
 * func-address: 0x10127e90
 * callers: none
 * callees: none
 */

float *__stdcall ShadowEngine::GetBiasedLightPos(float *a1, int a2)
{
  float *result; // eax

  result = a1;
  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  return result;
}
