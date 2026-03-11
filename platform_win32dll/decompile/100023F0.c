/*
 * func-name: sub_100023F0
 * func-address: 0x100023f0
 * callers: none
 * callees: none
 */

int __thiscall sub_100023F0(_DWORD *this, unsigned __int8 a2)
{
  int *v3; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // eax

  (*(void (__thiscall **)(_DWORD *, _DWORD))(*this + 76))(this, 0);
  v3 = (int *)this[1522];
  v4 = this[1829];
  v5 = *v3;
  if ( a2 )
    v6 = (*(int (__stdcall **)(int *, int, int))(v5 + 52))(v3, v4, 5);
  else
    v6 = (*(int (__stdcall **)(int *, int, int))(v5 + 52))(v3, v4, 6);
  this[1528] = a2;
  if ( v6 < 0 )
    Error("Error setting mouse input mode");
  return (*(int (__thiscall **)(_DWORD *, int))(*this + 76))(this, 1);
}
