/*
 * func-name: sub_1016D780
 * func-address: 0x1016d780
 * callers: none
 * callees: none
 */

int __thiscall sub_1016D780(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  v2 = this[6];
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    this[6] = 0;
  }
  result = this[7];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this[7]);
    this[7] = 0;
  }
  return result;
}
