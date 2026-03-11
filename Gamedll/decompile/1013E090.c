/*
 * func-name: sub_1013E090
 * func-address: 0x1013e090
 * callers: 0x10019af6
 * callees: 0x1001253a, 0x102c9d98
 */

bool sub_1013E090()
{
  int v0; // eax
  int v2; // [esp+0h] [ebp-14h]
  void *v3; // [esp+4h] [ebp-10h]

  if ( dword_103B6044 )
  {
    (**(void (__thiscall ***)(int, int))dword_103B6044)(dword_103B6044, 1);
    dword_103B6044 = 0;
  }
  v3 = operator new(0x14u);
  if ( v3 )
    v0 = sub_1001253A(v2, (int)v3);
  else
    v0 = 0;
  dword_103B6044 = v0;
  return v0 != 0;
}
