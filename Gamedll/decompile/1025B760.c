/*
 * func-name: sub_1025B760
 * func-address: 0x1025b760
 * callers: 0x1000dde6
 * callees: 0x102c9fe0
 */

int __thiscall sub_1025B760(int this)
{
  int result; // eax

  result = (int)((*(float *)(this + 704) - *(float *)(this + 712))
               / (*(float *)(this + 708) - *(float *)(this + 712))
               * 16.0);
  *(_DWORD *)(this + 3976) = result;
  if ( result > 15 )
    *(_DWORD *)(this + 3976) = --result;
  if ( *(int *)(this + 3976) < 0 )
    *(_DWORD *)(this + 3976) = 0;
  return result;
}
