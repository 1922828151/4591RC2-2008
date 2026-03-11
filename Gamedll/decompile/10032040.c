/*
 * func-name: sub_10032040
 * func-address: 0x10032040
 * callers: 0x1000bd2f
 * callees: none
 */

BOOL __thiscall sub_10032040(float *this, float *a2)
{
  return *a2 == *this && a2[1] == this[1] && a2[2] == this[2];
}
