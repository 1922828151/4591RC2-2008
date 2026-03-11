/*
 * func-name: sub_1001AB60
 * func-address: 0x1001ab60
 * callers: none
 * callees: none
 */

char *__thiscall sub_1001AB60(int this)
{
  int v2; // eax
  char v3; // cl

  if ( *(float *)(this + 132) < 0.0 )
    return "Higher distance bound must be positive!";
  v2 = *(_DWORD *)(this + 4);
  if ( (v2 & 2) != 0 && (v2 & 1) == 0 )
    return "Temporal coherence only works with First contact mode!";
  v3 = *(_BYTE *)(this + 140);
  if ( v3 && (v2 & 1) != 0 )
    return "Closest hit doesn't work with First contact mode!";
  if ( (v2 & 2) != 0 && v3 )
    return "Temporal coherence can't guarantee to report closest hit!";
  return (v2 & 0x10) != 0 ? "SkipPrimitiveTests not possible for RayCollider ! (not implemented)" : 0;
}
