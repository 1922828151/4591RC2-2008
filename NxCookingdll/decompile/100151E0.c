/*
 * func-name: sub_100151E0
 * func-address: 0x100151e0
 * callers: 0x10016120
 * callees: 0x10014b90, 0x10014ef0
 */

int *__thiscall sub_100151E0(int *this, float a2)
{
  int **v3; // eax
  int v4; // eax

  v3 = (int **)sub_10014EF0(this);
  if ( (*v3)[1] + 4 > (unsigned int)(*v3)[2] )
    sub_10014B90(v3, (int)*v3, 0);
  v4 = *this;
  this[4] = *(_DWORD *)(*this + 4) + *(_DWORD *)*this;
  *(_DWORD *)(v4 + 4) += 4;
  *(float *)this[4] = a2;
  return this;
}
