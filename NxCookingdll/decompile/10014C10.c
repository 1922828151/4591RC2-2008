/*
 * func-name: sub_10014C10
 * func-address: 0x10014c10
 * callers: 0x10014090, 0x100140f0, 0x1002e520, 0x1002f3a0, 0x10030400, 0x10030940
 * callees: none
 */

int __thiscall sub_10014C10(_DWORD *this)
{
  int v1; // eax
  int v2; // ecx
  int i; // edx

  v1 = this[1];
  v2 = *(_DWORD *)(v1 + 12);
  for ( i = 0; v2; v2 = *(_DWORD *)(v2 + 12) )
  {
    i += *(_DWORD *)(v1 + 4);
    v1 = v2;
  }
  return i + *(_DWORD *)(v1 + 4);
}
