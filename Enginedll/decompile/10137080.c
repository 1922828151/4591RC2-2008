/*
 * func-name: sub_10137080
 * func-address: 0x10137080
 * callers: none
 * callees: none
 */

int __thiscall sub_10137080(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  v2 = this[53];
  if ( v2 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    this[53] = 0;
  }
  result = this[54];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this[54]);
    this[54] = 0;
  }
  return result;
}
