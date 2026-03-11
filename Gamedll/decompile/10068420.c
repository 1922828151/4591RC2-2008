/*
 * func-name: sub_10068420
 * func-address: 0x10068420
 * callers: 0x10002ad1
 * callees: 0x10001dfc
 */

int __stdcall sub_10068420(int a1)
{
  int result; // eax

  result = sub_10001DFC(*(_DWORD *)(a1 + 292));
  if ( result )
    return (*(int (__thiscall **)(int))(*(_DWORD *)result + 92))(result);
  return result;
}
