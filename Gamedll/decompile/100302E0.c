/*
 * func-name: sub_100302E0
 * func-address: 0x100302e0
 * callers: none
 * callees: 0x1002d960
 */

int __cdecl sub_100302E0(int a1, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // [esp-8h] [ebp-Ch]
  _DWORD *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = v2;
  result = ((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O", &v5);
  if ( result )
  {
    sub_1002D960(dword_103B4E84, (int)v5);
    ++*v5;
    return Py_BuildValue(&unk_10309167, v4);
  }
  return result;
}
