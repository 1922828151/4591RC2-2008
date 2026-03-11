/*
 * func-name: sub_10032250
 * func-address: 0x10032250
 * callers: 0x1001a5c8
 * callees: none
 */

BOOL __thiscall sub_10032250(float *this)
{
  BOOL result; // eax
  float v2; // [esp+0h] [ebp-4h]
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+0h] [ebp-4h]

  v2 = fabs(*this);
  result = 0;
  if ( v2 < 0.00009999999747378752 )
  {
    v3 = fabs(this[1]);
    if ( v3 < 0.00009999999747378752 )
    {
      v4 = fabs(this[2]);
      if ( v4 < 0.00009999999747378752 )
        return 1;
    }
  }
  return result;
}
