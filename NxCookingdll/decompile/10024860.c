/*
 * func-name: sub_10024860
 * func-address: 0x10024860
 * callers: none
 * callees: none
 */

float *__stdcall sub_10024860(float *a1, int a2)
{
  float *result; // eax

  result = a1;
  *a1 = MEMORY[0];
  a1[1] = MEMORY[4];
  a1[2] = MEMORY[8];
  a1[3] = MEMORY[0xC];
  a1[4] = MEMORY[0x10];
  a1[5] = MEMORY[0x14];
  return result;
}
