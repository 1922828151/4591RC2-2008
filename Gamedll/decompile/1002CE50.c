/*
 * func-name: sub_1002CE50
 * func-address: 0x1002ce50
 * callers: none
 * callees: 0x1000d91d, 0x1002c940, 0x1002cb30
 */

int __cdecl sub_1002CE50(int a1, int a2)
{
  int v3; // eax
  _DWORD *v4; // [esp+0h] [ebp-14h] BYREF
  _DWORD *v5; // [esp+4h] [ebp-10h] BYREF
  int v6; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF
  int v8; // [esp+10h] [ebp-4h] BYREF

  v4 = 0;
  v5 = 0;
  if ( !PyArg_ParseTuple(a2, "sOO:SpawnActor", &v8, &v4, &v5)
    || sub_1002C940(&v7, v4, (const char **)dword_103B4E58, 1) == -1
    || sub_1002C940(&v6, v5, (const char **)dword_103B4E60, 1) == -1 )
  {
    return 0;
  }
  v3 = sub_1000D91D();
  return sub_1002CB30(v3, dword_103B4E5C, 0);
}
