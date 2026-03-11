/*
 * func-name: sub_1002E5C0
 * func-address: 0x1002e5c0
 * callers: none
 * callees: 0x1002d960
 */

int __cdecl sub_1002E5C0(int a1, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // [esp-8h] [ebp-Ch]
  _DWORD *v5; // [esp+0h] [ebp-4h] BYREF

  v5 = v2;
  result = ((int (__cdecl *)(int, const char *, _DWORD **))PyArg_ParseTuple)(a2, "O", &v5);
  if ( result )
  {
    sub_1002D960(dword_103B4E88, (int)v5);
    ++*v5;
    return Py_BuildValue(&unk_1030914F, v4);
  }
  return result;
}
