/*
 * func-name: sub_10028F40
 * func-address: 0x10028f40
 * callers: 0x10028fa0
 * callees: 0x100276e0
 */

char *__cdecl sub_10028F40(_DWORD *a1, _DWORD *a2)
{
  char *result; // eax

  result = sub_100276E0(a1, a2);
  if ( a1 )
  {
    *(_DWORD *)(dword_1005B470 + 4 * a1[6]) = 0;
    result = (char *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, a1);
  }
  if ( a2 )
  {
    *(_DWORD *)(dword_1005B470 + 4 * a2[6]) = 0;
    return (char *)(*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, a2);
  }
  return result;
}
