/*
 * func-name: sub_100040A0
 * func-address: 0x100040a0
 * callers: none
 * callees: none
 */

int __thiscall sub_100040A0(int this)
{
  if ( *(_DWORD *)(this + 5816) == 1 )
    return (int)((double)*(int *)(this + 6632) * *(float *)(this + 8));
  else
    return (int)0.0;
}
