/*
 * func-name: sub_10127AB0
 * func-address: 0x10127ab0
 * callers: 0x100dd6d0, 0x100dd730
 * callees: none
 */

int __thiscall sub_10127AB0(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int result; // eax

  if ( dword_112418D0 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)dword_112418D0 + 8))(dword_112418D0);
    dword_112418D0 = 0;
  }
  v2 = this[5];
  if ( v2 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v2 + 8))(this[5]);
    this[5] = 0;
  }
  v3 = this[4];
  if ( v3 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v3 + 8))(this[4]);
    this[4] = 0;
  }
  result = this[6];
  if ( result )
  {
    result = (*(int (__stdcall **)(_DWORD))(*(_DWORD *)result + 8))(this[6]);
    this[6] = 0;
  }
  return result;
}
