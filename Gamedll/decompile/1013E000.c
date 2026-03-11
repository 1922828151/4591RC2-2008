/*
 * func-name: sub_1013E000
 * func-address: 0x1013e000
 * callers: 0x1000d18e
 * callees: none
 */

int sub_1013E000()
{
  int result; // eax

  if ( dword_103B6044 )
  {
    result = (**(int (__thiscall ***)(int, int))dword_103B6044)(dword_103B6044, 1);
    dword_103B6044 = 0;
  }
  return result;
}
