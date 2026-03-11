/*
 * func-name: ?ClearLog@Editor@@QAEXXZ
 * func-address: 0x100101e0
 * callers: none
 * callees: 0x1000dc10
 */

void __thiscall Editor::ClearLog(Editor *this)
{
  int *v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF

  v1 = (int *)((char *)this + 2228);
  v2 = *((_DWORD *)this + 559);
  if ( *((_DWORD *)this + 558) > v2 )
    invalid_parameter_noinfo();
  v3 = v1[1];
  if ( v3 > v1[2] )
    invalid_parameter_noinfo();
  sub_1000DC10(v1, &v4, (int)v1, v3, (int)v1, v2);
}
