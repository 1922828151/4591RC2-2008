/*
 * func-name: sub_1025C420
 * func-address: 0x1025c420
 * callers: 0x10015acd
 * callees: none
 */

int __thiscall sub_1025C420(_DWORD *this, int a2)
{
  unsigned int v3; // edi
  int v4; // ecx
  int *v5; // ebx
  int result; // eax

  this[982] = a2;
  v3 = a2 + 27;
  v4 = *(_DWORD *)(dword_103B67B4 + 8);
  v5 = (int *)(dword_103B67B4 + 8);
  if ( !v4 || v3 >= (*(_DWORD *)(dword_103B67B4 + 12) - v4) >> 2 )
    _invalid_parameter_noinfo();
  result = *v5;
  this[981] = *(_DWORD *)(*v5 + 4 * v3);
  return result;
}
