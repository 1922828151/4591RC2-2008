/*
 * func-name: ?GetRotation@Gizmo@@QAE?AVMatrix@@XZ
 * func-address: 0x1000ac40
 * callers: 0x1008ce00
 * callees: none
 */

float *__thiscall Gizmo::GetRotation(int this, float *a2)
{
  float *result; // eax

  result = a2;
  *a2 = 0.0;
  a2[1] = 0.0;
  a2[2] = 0.0;
  a2[4] = 0.0;
  a2[5] = 0.0;
  a2[6] = 0.0;
  a2[8] = 0.0;
  a2[9] = 0.0;
  a2[10] = 0.0;
  a2[12] = 0.0;
  a2[13] = 0.0;
  a2[14] = 0.0;
  qmemcpy(a2, (const void *)(this + 752), 0x40u);
  return result;
}
